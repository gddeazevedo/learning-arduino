#include <Arduino.h>
#include <analog.h>


int pin = 9;
int bright = 255;

void setup() {
    pinMode(pin, OUTPUT);
}

void loop() {
    turn_off_gradually_led(pin);
}