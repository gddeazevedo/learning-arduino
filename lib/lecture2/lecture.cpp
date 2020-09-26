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

void blinkThreeLEDs(int pins[3], int times[3], int milliseconds[3]) {
    int total = times[0] + times[1] + times[2];
    
    for (int i = 0; i < total; i++) {
        if (i < times[0]) { 
            blinkLED(pins[0], milliseconds[0]);
        } else if (i < times[1] + times[0]) {
            blinkLED(pins[1], milliseconds[1]);
        } else {
            blinkLED(pins[2], milliseconds[2]);
        }
    }
}