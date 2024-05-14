
#include "../include/bspLed.hpp"
#include "CommandLed.hpp"

CommandLed::CommandLed(IDigitalIo& io){
    this->io = &io;

}


void CommandLed::ActivateLight(){
  io->digitalWrite(23,true);//LIGHT, LIGHTON
}

void CommandLed::DiactivateLight(){
  io->digitalWrite(23,false);//LIGHT, LIGHTOFF
}

