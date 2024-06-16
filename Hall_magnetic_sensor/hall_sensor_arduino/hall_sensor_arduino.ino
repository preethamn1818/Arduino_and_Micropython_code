const int sensorPin = A0;  // Pin connected to the output pin of the Hall sensor

void setup() {
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH) {
    // Magnetic field is present
    Serial.println("Magnetic field detected");
  } else {
    // No magnetic field detected
    Serial.println("No magnetic field detected");
  }

  delay(500);  // Wait for 0.5 seconds before taking the next reading
}
