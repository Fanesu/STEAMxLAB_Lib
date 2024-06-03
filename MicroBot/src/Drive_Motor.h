#ifndef DriverMotor_h
#define DriverMotor_h
#include "Arduino.h"

#define INA_M1 0
#define INB_M1 1
#define PWM_M1 3

#define INA_M2 2
#define INB_M2 3
#define PWM_M2 5

#define INA_M3 4
#define INB_M3 5
#define PWM_M3 9

#define INA_M4 6
#define INB_M4 7
#define PWM_M4 10

class motor {
public:
  motor();
  void begin();
  void motor1(bool direction, int speed);
  void motor2(bool direction, int speed);
  void motor3(bool direction, int speed);
  void motor4(bool direction, int speed);
  void motorStop(int motorNum);
  void motorStopAll();
// private:
};


#endif