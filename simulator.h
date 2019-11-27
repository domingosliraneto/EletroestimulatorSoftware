#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <QWidget>
#include <QDialog>
#include "SistemasdeControle/headers/controlLibs/pidTuning.h"
#include "SistemasdeControle/headers/ImageProcessing/grayimage.h"
#include "SistemasdeControle/headers/modelLibs/transferfunction.h"
#include "SistemasdeControle/headers/modelLibs/statespace.h"
#include "SistemasdeControle/headers/graphicLibs/plot.h"
#include "controlloop.h"
#include <map>

namespace Ui {
class simulator;
}

class simulator : public QWidget
{
    Q_OBJECT

public:
    explicit simulator(QWidget *parent = nullptr);
    ~simulator();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::simulator *ui;
    PlotHandler::plot<long double> *openLoopSimulation, *closeLoopSimulation;
    std::map<std::string,std::string> tuneController;
};

#endif // SIMULATOR_H
