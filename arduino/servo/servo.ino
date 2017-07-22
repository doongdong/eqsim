#include <Stepper.h>
 
//const int stepsPerRevolution = 200; //360도
const int stepsPerRevolution = 200; //360도

Stepper myStepper(stepsPerRevolution,11,9,10,8);
 
void setup() {
  myStepper.setSpeed(30); //분당 RPM인데 높게 하면 잘 안됨 30 이하에서나 잘 동작하는 것 같다.
}
void loop() {
  myStepper.step(stepsPerRevolution/1);
  myStepper.step(-stepsPerRevolution/1);
}

