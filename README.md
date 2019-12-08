# Automotive_fan_serial  [![Build Status](https://travis-ci.com/FireCastLabs/Automotive_fan_serial.svg?branch=master)](https://travis-ci.com/FireCastLabs/Automotive_fan_serial)
Sketch for running a motor off the Pololu G2 High-Power Motor Driver breakout board using the G2MotorDriver Library

## Summary
This sketch requires the [photodude/G2MotorDriver](https://github.com/photodude/G2MotorDriver) library.

## Supported platforms
This Library is designed to work with the Arduino IDE versions 1.8.x or later; we have not tested it with earlier versions.  This sketch and parent Library support any Arduino compatible board and the Pololu G2 High-Power Motor Driver breakout board

## Getting started

### Hardware

The [Pololu G2 High-Power Motor Driver breakout board](https://www.pololu.com/product/2991) can be purchased from Pololu's website.  Before continuing, careful reading of the product page is recommended.

### Software

If you are using version 1.6.2 or later of the [Arduino software (IDE)](https://www.arduino.cc/en/Main/Software), you can use the Library Manager to install this library:

1. In the Arduino IDE, open the "Sketch" menu, select "Include Library", then "Manage Libraries...".
2. Search for "G2MotorDriver".
3. Click the G2MotorDriver entry in the list.
4. Click "Install".

If this does not work, you can manually install the library:

1. Download the [latest release archive from GitHub](https://github.com/photodude/G2MotorDriver/releases) and decompress it.
2. Rename the folder "G2MotorDriver-xxxx" to "G2MotorDriver".
3. Drag the "G2MotorDriver" folder into the "libraries" directory inside your Arduino sketchbook directory.  You can view your sketchbook location by opening the "File" menu and selecting "Preferences" in the Arduino IDE.  If there is not already a "libraries" folder in that location, you should make the folder yourself.
4. After installing the library, restart the Arduino IDE.

You will also need this sketch
1. Download the [latest release archive from GitHub](https://github.com/FireCastLabs/Automotive_fan_serial/releases) and decompress it.
2. Rename the folder "Automotive_fan_serial-xxxx" to "Automotive_fan_serial".

## Documentation
Speed input on serial should be between -400 and 400. 0 corresponds to full coast.

Other funtions and details are documented in the parent [photodude/G2MotorDriver](https://github.com/photodude/G2MotorDriver) library.

## Version history

* 0.0.1 (2019-04-06): Inital version used in testing.
