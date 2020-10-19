#include "analog.h"


void turn_on_led(const uint8_t pin, int brightness) {
    analogWrite(pin, brightness);
}

void turn_off_gradually_led(uint8_t pin) {
    static int brightness = 255;
    
    while (brightness >= 0) {
        analogWrite(pin, brightness);
        delay(100);
        brightness--;
    }
}