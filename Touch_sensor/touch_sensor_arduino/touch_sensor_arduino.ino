const int TOUCH_PIN = A0; // Pin connected to the touch sensor output

void setup() {
  pinMode(TOUCH_PIN, INPUT);
  Serial.begin(9600); // Initialize serial communication at 9600 bps
}

void loop() {
  int touchValue = analogRead(TOUCH_PIN); // Read the value from the touch sensor

  if (touchValue > 500) { // Adjust this threshold value based on your touch sensor's output range
    Serial.println("TOUCH DETECTED!");
  } else {
    Serial.println("NO TOUCH");
  }

  delay(50); // Debounce the touch signal
}
