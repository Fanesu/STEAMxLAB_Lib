#include "Arduino.h"
#include "BlinkLED.h"

BlinkLED::BlinkLED(int pin) {
  _pin = pin;
  _ledState = LOW;
  _previousMillis = 0;
}
void BlinkLED::begin() {
  pinMode(_pin, OUTPUT);
  digitalWrite(_pin, _ledState);
}
void BlinkLED::blink(unsigned int interval){
  unsigned long currentMillis=millis();
  if (currentMillis - _previousMillis >= interval){
    _previousMillis = currentMillis;
    _ledState =! _ledState;
    digitalWrite(_pin, _ledState);
  } 
}