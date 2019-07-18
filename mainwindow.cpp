#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dataToSend = "00000\n";
    this->wifi = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->wifi = new Client(this->ui->lineEdit->text(),
                            this->ui->lineEdit_2->text().toUInt());
    connect(this->wifi, SIGNAL(connectionSuccessful()), this,
            SLOT(Conectado()));
}

void MainWindow::Conectado()
{
    QMessageBox msg;
    msg.setText("Conexão realizada com sucesso!");
    msg.exec();

//    bool temp = dataToSend[0].toLatin1() - '0';
//    dataToSend[0] = !temp + '0';
//    this->wifi->writeData(dataToSend);
}



void MainWindow::on_pushButton_2_clicked()
{
    QString str;

    str.append(ui->controlType->currentIndex() + 1);

    str.append(ui->channel->currentIndex() + 1);

    str.append(ui->Modes->currentIndex() + 1);

    str.append((uint8_t)(ui->frequency->text().toUInt()/256) + 1);
    str.append((uint8_t)(ui->frequency->text().toUInt()-((uint8_t)(ui->frequency->text().toUInt()/256))*256) + 1);

    str.append((uint8_t)(ui->period->text().toUInt()/256) + 1);
    str.append((uint8_t)(ui->period->text().toUInt()-((uint8_t)(ui->period->text().toUInt()/256))*256) + 1);

    str.append((uint8_t)(ui->powerLevel->text().toUInt()) + 1);

    if(this->wifi)
        this->wifi->writeData(str);
}
