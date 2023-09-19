#include <RotaryEncoder.h>

// Create a RotaryEncoder instance with two input pins (17 and 16) and a latch mode of TWO03.
RotaryEncoder encoder(17, 16, RotaryEncoder::LatchMode::TWO03);

void setup() {
  // Configure pins as INPUT_PULLUP for the encoder.
  pinMode(17, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  
  // Initialize the serial communication.
  Serial.begin(115200);
  while (!Serial); // Wait for serial connection to be established.
  
  // Print a message to indicate the start of the program.
  Serial.println("SimplePollRotator example for the RotaryEncoder library.");
}

void loop() {
  static int pos = 0;
  
  // Call the tick() method to monitor the encoder's state.
  encoder.tick();
  
  // Get the current position of the encoder.
  int newPos = encoder.getPosition();
  
  // Check if the position has changed.
  if (pos != newPos) {
    // Print the new position and the direction of rotation.
    Serial.print("pos:");
    Serial.print(newPos);
    Serial.print(" dir:");
    Serial.println(static_cast<int>(encoder.getDirection()));
    
    // Update the previous position.
    pos = newPos;
  }
}
