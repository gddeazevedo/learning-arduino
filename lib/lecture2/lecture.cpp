#include "lecture2.h"


void turnOnLED(unsigned int pin) {
    digitalWrite(pin, HIGH);
}

void blinkLED(unsigned int pin, unsigned long millisecond) {
    digitalWrite(pin, HIGH);
    delay(millisecond);
    digitalWrite(pin, LOW);
    delay(millisecond);
}