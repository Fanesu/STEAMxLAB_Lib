
#ifndef BlinkLED_h
#define BlinkLED_h

#include "Arduino.h"
class BlinkLED {
public:
  BlinkLED(int pin);  // Constructor to initialize the LED pin
  void begin();  // Initialize the pin mode
  void blink(unsigned int interval);  // Blink the LED with the specified interval

private:
  int _pin;                       // Pin number where the LED is connected
  bool _ledState;                 // Current state of the LED (on/off)
  unsigned long _previousMillis;  // Stores the last time the LED was toggled
};

#endif