#include "Arduino.h"
#include "Buzzer.h"

Buzzer::Buzzer(int pin) {
  _pin = pin;
  _buzzerState = 0;
  _previousMillis = 0;
}
void Buzzer::begin() {
  pinMode(_pin, OUTPUT);
  digitalWrite(_pin, _buzzerState);
}
void Buzzer::buzzerHigh(){
  digitalWrite(_pin, 1);
}
void Buzzer::buzzerLow(){
  digitalWrite(_pin, 0);
}
void Buzzer::blink(unsigned int interval){
  unsigned long currentMillis=millis();
  if (currentMillis - _previousMillis > interval){
    _previousMillis = currentMillis;
    _buzzerState =! _buzzerState;
    digitalWrite(_pin, _buzzerState);
  } 
}