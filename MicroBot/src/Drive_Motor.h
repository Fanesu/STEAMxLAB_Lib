#ifndef DriveMotor_h
#define DriveMotor_h
#include "Arduino.h"

class DriveMotor {
public:
  DriveMotor(int pwm_pin, int pin1, int pin2);
  void begin();
  void forward(int speed);
  void backward(int speed);
  void stop();

private:
int _pwm_pin;
int _pin1;
int _pin2;
};

#endif