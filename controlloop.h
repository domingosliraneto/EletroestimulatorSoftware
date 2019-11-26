#ifndef CONTROLLOOP_H
#define CONTROLLOOP_H
#include "SistemasdeControle/headers/modelLibs/conversions.h"
#include "SistemasdeControle/headers/controlLibs/modelpredictivecontrol.h"
#include "SistemasdeControle/headers/controlLibs/pid.h"

namespace ControlHandler
{
    template<typename Type>
    LinAlg::Matrix<Type> closedLoopStep(ModelHandler::Model<Type> *model, ControlHandler::PID<Type> controller, const uint16_t &samples=3000);
}

#include "controlloop.hpp"
#endif // CONTROLLOOP_H
