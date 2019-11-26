#include "controlloop.h"

template<typename Type>
LinAlg::Matrix<Type> ControlHandler::closedLoopStep(ModelHandler::Model<Type> *model, ControlHandler::PID<Type> controller, const uint16_t &samples)
{

    LinAlg::Matrix<Type> U = LinAlg::Ones<Type>(1,samples); // inicializa as matrizes para simulação em malha fechada
    LinAlg::Matrix<Type> Y = LinAlg::Zeros<Type>(1,samples);
    Type Utemp = 0, Ytemp = 0;


    for(unsigned i = 1; i <= samples; ++i)
    {
        Utemp = controller.OutputControl(1.0,Ytemp);
        U(1, i) = Utemp; //simula o cálculo do sinal de controle com atraso de transporte
        Ytemp = model->sim(U(1,i));
        Y(1,i) = Ytemp;// simula o sistema em malha fechada
    }
    return Y;
}
