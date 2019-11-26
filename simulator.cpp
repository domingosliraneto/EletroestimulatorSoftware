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

    std::string controller;
    if(ui->comboBox->currentIndex() == 1)
        controller = "P";
    else if (ui->comboBox->currentIndex() == 2)
        controller = "PI";
    else if (ui->comboBox->currentIndex() == 3)
        controller = "PID";

    if(ui->tunningZieglerNichols->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningZieglerNichols<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningCHRRegulatorio->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningCHRRegulatorio<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningCHRServo20OV->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningCHRServo20OV<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningCHRServo0OV->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningCHRServo0OV<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningCohenCoon->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningCohenCoon<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningITAELopes->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningITAELopes<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningIAERovira->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningIAERovira<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningITAERovira->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningITAERovira<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningIMC->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningIMC<long double>(Tfc,controller,ui->sens->text().toDouble());
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }
    if(ui->tunningIAELopes->checkState())
    {
        ModelHandler::TransferFunction<long double> Tf("0.51987","1,-0.949896",12.5);
        ModelHandler::TransferFunction<long double> Tfc = ModelHandler::d2c(Tf); Tfc.setTransportDelay(12.5);
        ControlHandler::PID<long double> pid = ControlHandler::tunningIAELopes<long double>(Tfc,controller);
        U = U||ControlHandler::closedLoopStep(&Tfc, pid);
    }


    closeLoopSimulation = new PlotHandler::plot<long double>(U,ui->widget);
}
