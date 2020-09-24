#include "lecture1.h"


void blinkSlower(unsigned int pin) {
    static unsigned long millisecond = 0;

    digitalWrite(pin, HIGH);
    delay(millisecond);
    digitalWrite(pin, LOW);
    delay(millisecond);

    millisecond += 10;

    if (millisecond == 1000) return;
}


void blinkFaster(unsigned int pin) {
    static unsigned long millisecond = 1000;
    
    digitalWrite(pin, HIGH);
    delay(millisecond);
    digitalWrite(pin, LOW);
    delay(millisecond);

    millisecond -= 10;

    if (millisecond == 0) return;
}