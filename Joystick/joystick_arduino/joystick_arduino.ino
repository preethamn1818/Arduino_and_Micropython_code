const int joyXAxis = A0; // Analog input pin for X axis
const int joyYAxis = A1; // Analog input pin for Y axis
const int joyZAxis = A2; // Analog input pin for Z axis (optional)
const int joyButton = 2; // Digital input pin for button

void setup() {
  Serial.begin(9600);
}

void loop() {
  int xValue = analogRead(joyXAxis); // Read X axis value
  int yValue = analogRead(joyYAxis); // Read Y axis value
  int zValue = analogRead(joyZAxis); // Read Z axis value (if present)
  int buttonState = digitalRead(joyButton); // Read button state

  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(", Y: ");
  Serial.print(yValue);
  if (joyZAxis >= 0) {
    Serial.print(", Z: ");
    Serial.print(zValue);
  }
  Serial.print(", Button: ");
  Serial.println(buttonState);

  delay(50); // Update at 20 Hz
}
