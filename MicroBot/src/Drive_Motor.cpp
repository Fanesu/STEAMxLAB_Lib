#include <PCA9557.h>
#include "Arduino.h"
#include "Drive_Motor.h"

PCA9557 io1(0x18, &Wire);

DriveMotor::DriveMotor(int pwm_pin, int pin1, int pin2) {
  _pwm_pin = pwm_pin;
  _pin1 = pin1;
  _pin2 = pin2;
}
void DriveMotor::begin() {
  io1.pinMode(_pin1, OUTPUT);
  io1.pinMode(_pin2, OUTPUT);
  pinMode(_pwm_pin, OUTPUT);
  stop();
}
void DriveMotor::forward(int speed) {
  io1.digitalWrite(_pin1, 1);
  io1.digitalWrite(_pin2, 0);
  analogWrite(_pwm_pin, speed);
}
void DriveMotor::backward(int speed) {
  io1.digitalWrite(_pin1, 0);
  io1.digitalWrite(_pin2, 1);
  analogWrite(_pwm_pin, speed);
}
void DriveMotor::stop() {
  io1.digitalWrite(_pin1, 0);
  io1.digitalWrite(_pin2, 0);
  analogWrite(_pwm_pin, 0);
}