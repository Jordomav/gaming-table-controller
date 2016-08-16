#include <Arduino.h>
#include <Keyboard.h>

// Button variables
int redBtn = 4; // represents W key
int blueBtn = 5; // represents A key
int yellowBtn = 6; // represents S key
int greenBtn = 7; // represents D key

// Joystick variables
int forward = 8; // represents UP arrow
int backward = 9; // represents DOWN arrow
int left = 10; // represents LEFT arrow
int right = 11; // represents RIGHT arrow

void setup () {
//    Begin watching for keyboard inputs
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
    int redPress = digitalRead(redBtn); // W
    int bluePress = digitalRead(blueBtn); // A
    int yellowPress = digitalRead(yellowBtn); // S
    int greenPress = digitalRead(greenBtn); // D

// digital read variables for joystick
    int joystickUp = digitalRead(forward); // UP
    int joystickDown = digitalRead(backward); // DOWN
    int joystickLeft = digitalRead(left); // LEFT
    int joystickRight = digitalRead(right); // RIGHT

    if (redPress == 0) {
        Keyboard.press(87); // W key pressed
    } else {
        Keyboard.release(87); // W key released
    }

    if (bluePress == 0) {
        Keyboard.press(65); // A key pressed
    } else {
        Keyboard.release(65); // A key released
    }

    if (yellowPress == 0) {
        Keyboard.press(83); // S key pressed
    } else {
        Keyboard.release(83); // S key released
    }

    if (greenPress == 0) {
        Keyboard.press(68); // D key pressed
    } else {
        Keyboard.release(68); // D key released
    }

    if (joystickUp == 0) {
        Keyboard.press(38); // UP key pressed
    } else {
        Keyboard.release(38); // UP key released
    }

    if (joystickDown == 0) {
        Keyboard.press(40); // DOWN key pressed
    } else {
        Keyboard.release(40); // Down key released
    }

    if (joystickLeft == 0) {
        Keyboard.press(37); // LEFT key pressed
    } else {
        Keyboard.release(37); // LEFT key released
    }

    if (joystickRight == 0) {
        Keyboard.press(39); // RIGHT key pressed
    } else {
        Keyboard.release(39); // RIGHT key released
    }
}
