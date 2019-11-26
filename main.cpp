#include "mainwindow.h"
#include "simulator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    simulator simu; simu.show();

    return a.exec();
}
