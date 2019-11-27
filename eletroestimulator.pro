#-------------------------------------------------
#
# Project created by QtCreator 2018-05-30T09:41:52
#
#-------------------------------------------------

QT       += core gui\
            network\
            printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = eletroestimulator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    SistemasdeControle/headers/graphicLibs/QCustomPlot/qcustomplot.cpp \
        mainwindow.cpp \
    client.cpp \
    simulator.cpp

HEADERS  += mainwindow.h \
    SistemasdeControle/headers/controlLibs/modelpredictivecontrol.h \
    SistemasdeControle/headers/controlLibs/pid.h \
    SistemasdeControle/headers/controlLibs/pidTuning.h \
    SistemasdeControle/headers/graphicLibs/QCustomPlot/qcustomplot.h \
    SistemasdeControle/headers/graphicLibs/plot.h \
    SistemasdeControle/headers/modelLibs/arx.h \
    SistemasdeControle/headers/modelLibs/conversions.h \
    SistemasdeControle/headers/modelLibs/integrativemodel.h \
    SistemasdeControle/headers/modelLibs/model.h \
    SistemasdeControle/headers/modelLibs/predictionmodel.h \
    SistemasdeControle/headers/modelLibs/statespace.h \
    SistemasdeControle/headers/modelLibs/transferfunction.h \
    SistemasdeControle/headers/optimizationLibs/leastsquare.h \
    SistemasdeControle/headers/optimizationLibs/optimization.h \
    SistemasdeControle/headers/optimizationLibs/pso.h \
    SistemasdeControle/headers/optimizationLibs/recursiveleastsquare.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h \
    SistemasdeControle/headers/primitiveLibs/polynom.h \
    SistemasdeControle/src/controlLibs/modelpredictivecontrol.hpp \
    SistemasdeControle/src/controlLibs/pid.hpp \
    SistemasdeControle/src/controlLibs/pidTuning.hpp \
    SistemasdeControle/src/graphicLibs/plot.hpp \
    SistemasdeControle/src/modelLibs/arx.hpp \
    SistemasdeControle/src/modelLibs/conversions.hpp \
    SistemasdeControle/src/modelLibs/integrativemodel.hpp \
    SistemasdeControle/src/modelLibs/model.hpp \
    SistemasdeControle/src/modelLibs/predictionmodel.hpp \
    SistemasdeControle/src/modelLibs/statespace.hpp \
    SistemasdeControle/src/modelLibs/transferfunction.hpp \
    SistemasdeControle/src/optimizationLibs/leastsquare.hpp \
    SistemasdeControle/src/optimizationLibs/optimization.hpp \
    SistemasdeControle/src/optimizationLibs/pso.hpp \
    SistemasdeControle/src/optimizationLibs/recursiveleastsquare.hpp \
    SistemasdeControle/src/primitiveLibs/LinAlg/linalg.hpp \
    SistemasdeControle/src/primitiveLibs/LinAlg/matrix.hpp \
    SistemasdeControle/src/primitiveLibs/polynom.hpp \
    client.h \
    controlloop.h \
    controlloop.hpp \
    simulator.h

FORMS    += mainwindow.ui \
    simulator.ui
