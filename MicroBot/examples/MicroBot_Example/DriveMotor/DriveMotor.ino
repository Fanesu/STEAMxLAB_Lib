#include "DriverMotor.h"

motor myMotor;
void setup() {
  // put your setup code here, to run once:
  // Wire.begin();
  // Motor.begin();
}
void loop() {
  // put your main code here, to run repeatedly:
  myMotor.motor1(1, 250);
  myMotor.motor2(0, 250);
  myMotor.motor3(1, 250);
  myMotor.motorStop(1);
  myMotor.motorStop(2);
  myMotor.motorStopAll();
}     

