# Arduino-MultiComponent-Control
This Elaborates how any Smart System Functions with many End Devices.
![image](https://github.com/RoggersAnguzu/Arduino-MultiComponent-Control/assets/141458053/0a490603-e2a3-4f48-a1da-ffdbc5b12578)

# Arduino Multi-Component Control

This project demonstrates how to control multiple components, including LEDs, a motor, and a piezo buzzer, using an Arduino board.
## Components Used

- Arduino board (compatible with the Arduino IDE)
- LEDs (connected to pins 1, 2, and 3)
- Motor (connected to pin 8)
- Piezo Buzzer (connected to pin 9)

## Setup

1. Connect the LEDs to pins 1, 2, and 3 of the Arduino board.
2. Connect the motor to pin 8 of the Arduino board.
3. Connect the piezo buzzer to pin 9 of the Arduino board.
4. Upload the provided code to the Arduino board using the Arduino IDE.
5. Open the Serial Monitor in the Arduino IDE to view the output.

## Functionality

The code in this project allows you to control the behavior of the components based on the state of input pins. Here's a breakdown of the functionality:

- If both input pins 4 and 5 are in a HIGH state, the code will turn on LED 3, LED 2, activate the motor at full speed, and activate the piezo buzzer. This represents a specific condition or event.
- If either input pin 4 or 5 is in a HIGH state, the code will turn on LED 3. This represents a different condition or event.
- If neither input pin 4 nor 5 is in a HIGH state, the code will turn on LED 1. This represents another condition or event.

## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## Acknowledgments
 The Arduino project and community for providing the platform and resources for building this project.
