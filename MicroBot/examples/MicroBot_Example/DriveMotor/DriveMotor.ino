#include "Drive_Motor.h"
#include "Buzzer.h"
#include "Wire.h"

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

DriveMotor motor1(PWM_M1, INA_M1, INB_M1);
DriveMotor motor2(PWM_M2, INA_M2, INB_M2);
DriveMotor motor3(PWM_M3, INA_M3, INB_M3);
DriveMotor motor4(PWM_M4, INA_M4, INB_M4);
Buzzer myBuzzer(4);

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  myBuzzer.begin();
  motor1.begin();
  motor2.begin();
  motor3.begin();
  motor4.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
myBuzzer.buzzerHigh();
myBuzzer.buzzerLow();
myBuzzer.blink(1000);
}
