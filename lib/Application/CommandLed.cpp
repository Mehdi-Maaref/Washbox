#include "../include/bspLed.hpp"
#include <CommandLed.hpp>

CommandLed::CommandLed(IDigitalIo& io){
    this->io = &io;

}


void CommandLed::ActivateLight(){
  io->digitalWrite(LIGHT,LIGHTON);//LIGHT, LIGHTON
}

void CommandLed::DiactivateLight(){
  io->digitalWrite(LIGHT,LIGHTOFF);//LIGHT, LIGHTOFF
}

