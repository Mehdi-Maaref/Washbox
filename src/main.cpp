#include <Arduino.h>

// function declarations 
void configSystem();
void configApplication();

// global variable and object instanciation 
// setup arduino framework
void setup() {
  // put your setup code here, to run once:
  configSystem();
  configApplication();
  // pour avoir un écho de débogage sur la console du PC
  Serial.begin(115200);
  Serial.println("programme Washbox");
  //currentTime = millis();
}

// loop arduino framework
void loop() {
  // put your main code here, to run repeatedly:
}

//method implementation
void configSystem()
{
}

void configApplication()
{
}
