const int flameSensorPin = A0;  // Pin connected to flame sensor output

void setup() {
  pinMode(flameSensorPin, INPUT); // Set the pin as an input
  Serial.begin(9600);
}

void loop() {
  int flameReading = analogRead(flameSensorPin); // Read the analog value from the flame sensor

  if (flameReading > 500) { // Adjust this threshold value based on your sensor's sensitivity and desired detection range
    Serial.println("Flame detected!");
  } else {
    Serial.println("No flame detected.");
  }

  delay(1000); // Read the sensor every second
}
