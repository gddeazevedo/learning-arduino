#ifndef lecture2_h
#define lecture2_h

#include <Arduino.h>

void turnOnLED(unsigned int pin);
void blinkLED(unsigned int pin, unsigned long millisecond);
void blinkThreeLEDs(int pins[3], int times[3], int milliseconds[3]);

#endif