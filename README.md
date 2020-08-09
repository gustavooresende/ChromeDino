# DinoChrome

## Introduction

This project consists in a simple automation using a servo and a LDR for the dino game found in Google Chrome browser. The servo is used to press the jump button every time the LDR detects any alteration in the screen, in this case, the obstacles.

## Materials

The materials used are:

- Arduino Uno
- Light Dependent Resistor (LDR)
- Servo - SG90
- Jumpers
- Breadboard

## Circuit

Consult the datasheet of your components to get the right pinout.

The Fritzing file with the schematic can be found in the /doc folder.

![alt text](https://github.com/gustavoaguilar/IRLock/blob/master/doc/IRLock_Sketch_bb.png "Circuit")

## Code

This project was written with the Visual Studio Code Arduino extension, but Arduino IDE was used to upload the code for arduino board for more convenience.

To make the prototyping faster, the Servo.h librarie were used, making servo control more simple and intuitive.

### Dependencies

These are the needed libraries:

- Servo

### Configuration

This first section is where you may change the pins used according to your circuit and the activation threshold of LDR:

```c
#define SERVO 6
#define threshold 290
#define pinLDR A0
```

## Limitations

Using only one servo and one LDR, the project is limited to avoid only the cactus, when the pterodactyls start to come, the game is over. Another problem using only one LDR is the color inversion that occurs when night begin in game, this problem could be treated adding one LDR to detect the background luminosity.

## Contribute

If you have any suggestion to improve this project, let me know. :)
