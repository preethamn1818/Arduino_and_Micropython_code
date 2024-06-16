// Define the pins used for the Sound Module
const int modulePin = 9; // Pin 9 on the Arduino board

void setup() {
  pinMode(modulePin, OUTPUT); // Set the pin as output
}

void loop() {
  // Play a sound (replace with your own sounds)
  playSound("sound1.wav");
  delay(1000); // Wait for 1 second

  // Stop the sound
  stopSound();
  delay(1000); // Wait for 1 second
}

// Function to play a sound
void playSound(String soundFile) {
  digitalWrite(modulePin, HIGH); // Turn on the module
  delay(10); // Wait for 10ms

  // Send the sound file to the module
  Serial.print("play ");
  Serial.println(soundFile);
  delay(100); // Wait for 100ms

  digitalWrite(modulePin, LOW); // Turn off the module
  delay(10); // Wait for 10ms
}

// Function to stop a sound
void stopSound() {
  digitalWrite(modulePin, HIGH); // Turn on the module
  delay(10); // Wait for 10ms

  // Send the "stop" command to the module
  Serial.print("stop");
  Serial.println();
  delay(100); // Wait for 100ms

  digitalWrite(modulePin, LOW); // Turn off the module
  delay(10); // Wait for 10ms
}
