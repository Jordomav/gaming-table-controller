# Game Table Joystick and button emulator
Emulate the traditional arcade feel with buttons and a joystick.
Built with an [Arduino Leonardo] (https://www.arduino.cc/en/Main/ArduinoBoardLeonardo).

##Parts needed:
1. [Arduino Leonardo] (https://www.arduino.cc/en/Main/ArduinoBoardLeonardo).
2. [Ikea Lack Coffee Table] (http://www.ikea.com/us/en/catalog/categories/series/09063/)
3. [Four Buttons] (https://www.amazon.com/gp/product/B00NPZ2028/ref=oh_aui_detailpage_o00_s01?ie=UTF8&psc=1)
4. [Joystick] (https://www.amazon.com/gp/product/B005BIC9QE/ref=oh_aui_detailpage_o00_s01?ie=UTF8&psc=1)

##The setup
Be sure that you have [platformio] (http://platformio.org/) installed on your local machine, it is what we are going to use to transfer the code to the Arduino. 
Run `git clone git@github.com:Jordomav/gaming-table-controller.git`

cd into the directory `cd gaming-table-controller`

Open up the `platformio.ini`

Change `upload_port = /dev/tty.usbmodemHIDP1` to match the port you have the Leonardo plugged into

Run `platformio run` and the code will now be on your Leonardo

## Current settings

The current pin layout is:
```C++
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
```

Pin Mode config:
```C++
pinMode(redBtn, INPUT_PULLUP);
```
`redBtn` being the 4th io pin. Using `INPUT_PULLUP` is very important, if you just use `INPUT` this will not work.

THe current digital write variables are:
```C++
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
```