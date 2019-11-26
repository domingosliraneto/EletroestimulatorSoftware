#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QTextDocument>
#include <QTextBlock>
#include <QDateTime>


#include "client.h"
#include "SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "SistemasdeControle/headers/modelLibs/transferfunction.h"
#include "SistemasdeControle/headers/controlLibs/pid.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void Conectado();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void sendIdentificationData();

    void dadosRecebidos();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    Client *wifi;
    QString dataToSend;
    unsigned int iterator;
    QTimer *timer;
    bool calibrationButtoPressed;
};

#endif // MAINWINDOW_H
