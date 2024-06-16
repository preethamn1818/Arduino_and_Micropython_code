const int reedSwitchPin = 2; // pin connected to the reed switch

void setup() {
  pinMode(reedSwitchPin, INPUT);
}

void loop() {
  int state = digitalRead(reedSwitchPin);

  if (state == HIGH) {
    Serial.println("Reed switch is closed");
  } else {
    Serial.println("Reed switch is open");
  }

  delay(1000); // wait for 1 second before reading again
}
