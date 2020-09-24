#include <Arduino.h>


unsigned int i = 1000;


void setup() {
    pinMode(13, OUTPUT);
}


void loop() {
    digitalWrite(13, HIGH);
    delay(i);
    digitalWrite(13, LOW);
    delay(i);

    i -= 10;
}