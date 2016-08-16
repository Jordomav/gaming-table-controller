#include <Arduino.h>
#include <Keyboard.h>

// Button variables
int redBtn = 4;
int blueBtn = 5;
int yellowBtn = 6;
int greenBtn = 7;

// Joystick variables
int forward = 8;
int backward = 9;
int left = 10;
int right = 11;

void setup () {
    Keyboard.begin();

//    Button pin modes
    pinMode(redBtn, INPUT_PULLUP);
    pinMode(blueBtn, INPUT_PULLUP);
    pinMode(yellowBtn, INPUT_PULLUP);
    pinMode(greenBtn, INPUT_PULLUP);

//    Joystick pin modes
    pinMode(forward, INPUT_PULLUP);
    pinMode(backward, INPUT_PULLUP);
    pinMode(left, INPUT_PULLUP);
    pinMode(right, INPUT_PULLUP);
}

void loop () {
// digital read variables for buttons
    int redPress = digitalRead(redBtn);
    int bluePress = digitalRead(blueBtn);
    int yellowPress = digitalRead(yellowBtn);
    int greenPress = digitalRead(greenBtn);

//    digital read variables for joystick
    int joystickUp = digitalRead(forward);
    int joystickDown = digitalRead(backward);
    int joystickLeft = digitalRead(left);
    int joystickRight = digitalRead(right);

}