#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dataToSend = "00000\n";
    this->wifi = nullptr;
    setDefaultAdjustment();
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
    connect(this->wifi, SIGNAL(hasReadData()), this,
            SLOT(dadosRecebidos()));
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

void MainWindow::dadosRecebidos()
{
    LinAlg::Matrix<double> values = this->wifi->dataReceived().toStdString().c_str();
    values(1,1) = accelX.rescale(values(1,1));
    values(1,2) = pitch.rescale(values(1,2));
    values(1,3) = roll.rescale(values(1,3));
    std::string str; str << values;
    this->ui->textEdit_2->append(str.c_str());
    this->ui->textEdit_3->append(QString::number(QDateTime::currentMSecsSinceEpoch()));
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

void MainWindow::on_pushButton_3_clicked()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(sendIdentificationData()));
    timer->start(100);
    this->iterator = 0;
}

void MainWindow::sendIdentificationData()
{
    QString str;

    str.append(ui->controlType->currentIndex() + 1);

    str.append(ui->channel->currentIndex() + 1);

    str.append(ui->Modes->currentIndex() + 1);

    str.append((uint8_t)(ui->frequency->text().toUInt()/256) + 1);
    str.append((uint8_t)(ui->frequency->text().toUInt()-((uint8_t)(ui->frequency->text().toUInt()/256))*256) + 1);

    str.append((uint8_t)(ui->period->text().toUInt()/256) + 1);
    str.append((uint8_t)(ui->period->text().toUInt()-((uint8_t)(ui->period->text().toUInt()/256))*256) + 1);

    QTextDocument *doc = this->ui->textEdit->document();
    QTextBlock tb = doc->findBlockByLineNumber(this->iterator); // The second line.
    QString powerLevel = tb.text();
    str.append((uint8_t)(powerLevel.toUInt()) + 1);

    if(this->wifi)
        this->wifi->writeData(str);
    this->iterator++;
    if(this->iterator == doc->blockCount())
        disconnect(timer, SIGNAL(timeout()), this, SLOT(sendIdentificationData()));
}

void MainWindow::on_pushButton_4_clicked()
{
    QTextDocument *doc1 = this->ui->textEdit->document();
    QTextDocument *doc2 = this->ui->textEdit_2->document();
    QTextDocument *doc3 = this->ui->textEdit_3->document();

    QFile data("output.txt");
    if (data.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream out(&data);
        out << "Input,Output \n";
        for(unsigned i = 0; i < doc1->blockCount(); ++i)
        {
            QTextBlock tb1 = doc1->findBlockByLineNumber(i); // The second line.
            QTextBlock tb2 = doc2->findBlockByLineNumber(i); // The second line.
            QTextBlock tb3 = doc3->findBlockByLineNumber(i); // The second line.
            out <<  tb1.text() << "," << tb2.text() << "," << tb3.text() << "\n";
        }
    }
}

void MainWindow::setDefaultAdjustment()
{
    accelX.setMinInput(ui->gMin->text().toDouble());
    accelX.setMaxInput(ui->gMax->text().toDouble());
    accelX.setMinOutput(ui->gRefMin->text().toDouble());
    accelX.setMaxOutput(ui->gRefMax->text().toDouble());

    pitch.setMinInput(ui->pitchMin->text().toDouble());
    pitch.setMaxInput(ui->pitchMax->text().toDouble());
    pitch.setMinOutput(ui->pitchRefMin->text().toDouble());
    pitch.setMaxOutput(ui->pitchRefMax->text().toDouble());

    roll.setMinInput(ui->rollMin->text().toDouble());
    roll.setMaxInput(ui->rollMax->text().toDouble());
    roll.setMinOutput(ui->rollRefMin->text().toDouble());
    roll.setMaxOutput(ui->rollRefMax->text().toDouble());
}

void MainWindow::on_pushButton_5_clicked()
{
    setDefaultAdjustment();
}
