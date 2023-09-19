# Rotary Encoder

This is a simple example for using a rotary encoder with the Arduino environment using the RotaryEncoder library. It demonstrates how to read the current position and direction of a rotary encoder and print the values to the serial monitor.

## Hardware Setup

1. Attach a rotary encoder with output pins to your Arduino:
   - Connect one of the encoder pins to digital pin 17 (or any other pin you prefer).
   - Connect the other encoder pin to digital pin 16 (or any other pin you prefer).
   - Make sure to connect the common contact of the encoder to ground (GND).

## Library

This example uses the [RotaryEncoder library](https://www.arduino.cc/reference/en/libraries/rotaryencoder/). Make sure to install this library in your Arduino IDE.

## Usage

1. Clone this repository or download the `RotaryEncoder.ino` file.

2. Open the `RotaryEncoder.ino` file in your Arduino IDE.

3. Upload the code to your Arduino board.

4. Open the Arduino Serial Monitor (115200 baud rate) to view the output.

5. Rotate the rotary encoder to see the position and direction information printed to the serial monitor.

## Troubleshooting

- If you encounter issues with the direction of rotation being detected incorrectly, you may need to swap the encoder pins in your hardware setup.
- Ensure that the encoder is properly connected, and there are no loose wires or connections.

## License

This code is provided under the GPL General Purpose License.

---

Feel free to modify and adapt this code for your own projects. If you have any questions or encounter issues, please feel free to create an issue in this repository.
