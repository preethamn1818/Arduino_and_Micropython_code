#include <IRremote.h> // Include the IRremote library

const int irLedPin = 2; // Pin for IR LED (digital pin 2)

void setup() {
  pinMode(irLedPin, OUTPUT); // Set IR LED pin as output
}

void loop() {
  // Emission code goes here...
  // For example, let's emit a simple IR signal using the IRremote library
  irSend(IR_CODE, 38); // Send an IR code (0x00FF) with a duration of 38 microseconds

  delay(1000); // Wait for 1 second before emitting again
}

// Define the IR code you want to send (in hexadecimal)
const unsigned int IR_CODE = 0x00FF;

// Function to send an IR signal using the IRremote library
void irSend(unsigned int code, int duration) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(irLedPin, HIGH);
    delayMicroseconds(duration);
    digitalWrite(irLedPin, LOW);
    delayMicroseconds(duration);
  }
}
