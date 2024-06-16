const int buzzPin = 9; // Pin for buzzer

void setup() {
  pinMode(buzzPin, OUTPUT); // Set pin as output
}

void loop() {
  // Turn on the buzzer for 1000ms (1 second)
  digitalWrite(buzzPin, HIGH);
  delay(1000);

  // Turn off the buzzer for 500ms (0.5 seconds)
  digitalWrite(buzzPin, LOW);
  delay(500);
}
