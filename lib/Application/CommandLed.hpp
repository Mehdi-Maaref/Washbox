
#ifndef COMMAND_LED
#define COMMAND_LED

#include "../domain/Services/DigitalIo/IDigitalIo.hpp"

enum LedStates{
    LightOff,
    LightOn,
};


class CommandLed{
    private:
     IDigitalIo* _io;
     public:
    LedStates LedState;

    void ActivateLight();
    void DiactivateLight();
    
     CommandLed(IDigitalIo& io);
};
 #endif