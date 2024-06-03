#include "BlinkLED.h"

BlinkLED led(13);
void setup() {
  // put your setup code here, to run once:
  led.begin();
}
void loop() {
  // put your main code here, to run repeatedly:
  led.blink(100);
}
