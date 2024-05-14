#include <Arduino.h>
#include "bspLed.hpp"
#include "../Application/CommandLed.hpp"
#include "../Domain/Services/DigitalIo/IDigitalIo.hpp"
#include "../Infrastructure/DigitalIo/DigitalIoArduino.hpp"
// function declarations 
void configSystem();
void configApplication();

// global variable and object instanciation 
DigitalIoArduino io;

 CommandLed  commandLed (io);
// setup arduino framework
void setup() {
  // put your setup code here, to run once:
  configSystem();
  configApplication();
  // pour avoir un écho de débogage sur la console du PC
  Serial.begin(115200);
  Serial.println("programme led ");
  //currentTime = millis();
}

// loop arduino framework
void loop() {
        if (commandLed.LedState == LightOff) {

          commandLed.ActivateLight();  // Turn on the LED
        } else {
          commandLed.DiactivateLight();   // Turn off the LED
        }
      
}

//method implementation
void configSystem()
{
  // Digital IO
  
  pinMode(LIGHT_BUTTON,INPUT_PULLDOWN);
  pinMode(LIGHT,OUTPUT);

}

void configApplication()
{
  commandLed.DiactivateLight();
}
