#ifndef Buzzer_h
#define Buzzer_h
#include "Arduino.h"

class Buzzer {
public:
  Buzzer();  // Constructor to initialize the LED pin
  void begin();  // Initialize the pin mode
  void buzzerHigh();
  void buzzerLow();
  void blink(unsigned int interval);  // Blink the LED with the specified interval

private:                      // Pin number where the LED is connected
  bool _buzzerState;                 // Current state of the LED (on/off)
  unsigned long _previousMillis;  // Stores the last time the LED was toggled
};

#endif