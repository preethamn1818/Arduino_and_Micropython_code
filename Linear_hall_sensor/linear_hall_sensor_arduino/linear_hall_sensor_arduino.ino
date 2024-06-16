const int hallPin = 2; // Pin connected to the Hall sensor output

void setup() {
  pinMode(hallPin, INPUT); // Set the pin as an input
}

void loop() {
  int hallState = digitalRead(hallPin); // Read the state of the Hall sensor (0 or 1)

  if (hallState == HIGH) { // If the magnet is near the sensor
    Serial.println("Magnet detected!");
  } else { // If the magnet is not near the sensor
    Serial.println("No magnet detected");
  }

  delay(50); // Wait for a short time before taking another reading
}
