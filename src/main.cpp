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
    int redPress = digitalRead(redBtn);
    int bluePress = digitalRead(blueBtn);
    int yellowPress = digitalRead(yellowBtn);
    int greenPress = digitalRead(greenBtn);

// digital read variables for joystick
    int joystickUp = digitalRead(forward);
    int joystickDown = digitalRead(backward);
    int joystickLeft = digitalRead(left);
    int joystickRight = digitalRead(right);

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