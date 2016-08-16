#include <Arduino.h>
#include <Keyboard.h>

// Button variables
int redBtn = 4;
int blueBtn = 5;
int yelwBtn = 6;
int greenBtn = 7;

// Joystick variables
int forward = 8;
int backawrd = 9;
int left = 10;
int right = 11;

void setup () {
    Keyboard.begin();

//    Button pin modes
    pinMode(redBtn, INPUT_PULLUP);
    pinMode(blueBtn, INPUT_PULLUP);
    pinMode(yelwBtn, INPUT_PULLUP);
    pinMode(greenBtn, INPUT_PULLUP);

//    Joystick pin modes
    pinMode(forward, INPUT_PULLUP);
    pinMode(backawrd, INPUT_PULLUP);
    pinMode(left, INPUT_PULLUP);
    pinMode(right, INPUT_PULLUP);
}

void loop () {

}