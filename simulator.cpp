#include "simulator.h"
#include "ui_simulator.h"

simulator::simulator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::simulator)
{
    ui->setupUi(this);
}

simulator::~simulator()
{
    delete ui;
}

void simulator::on_pushButton_clicked()
{
    //Lembrar de fazer: Organizar todos os métodos de sintonia em uma função única q seja passado um parâmetro (factory sintonia)
    //                  Melhorar as cores dos plots e colocar legendas para cada linha de cor diferente
    //                  Proteger a sintonia quando não for escolhido um controlador
    //                  Criar uma lista de strings com os métodos de sintonia que já foram criados
    LinAlg::Matrix<long double> U;
    tuneController[ui->comboBox_3->currentText().toStdString()] = ui->comboBox->currentText().toStdString();
    ui->textEdit->clear();
    for (std::map<std::string,std::string>::iterator it = tuneController.begin(); it != tuneController.end(); ++it)
    {
        std::string str = it->first; str = str + "  "; str = str + it->second;
        ui->textEdit->append(str.c_str());
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::controllerTuning(Tfc,it->second, it->first);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }

    closeLoopSimulation = new PlotHandler::plot<long double>(U,ui->widget);
}

void simulator::on_pushButton_2_clicked()
{
    LinAlg::Matrix<long double> U;
    tuneController.erase(ui->comboBox_3->currentText().toStdString());
    ui->textEdit->clear();
    for (std::map<std::string,std::string>::iterator it = tuneController.begin(); it != tuneController.end(); ++it)
    {
        std::string str = it->first; str = str + "  "; str = str + it->second;
        ui->textEdit->append(str.c_str());
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::controllerTuning(Tfc,it->second, it->first);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(U.getNumberOfRows() != 0)
        closeLoopSimulation = new PlotHandler::plot<long double>(U,ui->widget);
}
