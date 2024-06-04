#include "Arduino.h"
#include "Buzzer.h"

Buzzer::Buzzer() {
  _buzzerState = 0;
  _previousMillis = 0;
}
void Buzzer::begin() {
  pinMode(4, OUTPUT);
  digitalWrite(4, _buzzerState);
}
void Buzzer::buzzerHigh(){
  digitalWrite(4, 1);
}
void Buzzer::buzzerLow(){
  digitalWrite(4, 0);
}
void Buzzer::blink(unsigned int interval){
  unsigned long currentMillis=millis();
  if (currentMillis - _previousMillis > interval){
    _previousMillis = currentMillis;
    _buzzerState =! _buzzerState;
    digitalWrite(4, _buzzerState);
  } 
}