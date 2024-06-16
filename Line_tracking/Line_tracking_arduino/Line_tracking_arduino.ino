const int LINE_TRACKING_PIN = A0; // Analog input pin for the line tracking module

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(LINE_TRACKING_PIN); // Read the value from the line tracking module
  if (sensorValue > 500) { // Threshold value to detect the line
    Serial.println("Line detected!");
  } else {
    Serial.println("No line detected");
  }
  delay(50);
}
