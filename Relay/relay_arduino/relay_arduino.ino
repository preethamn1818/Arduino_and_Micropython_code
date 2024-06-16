const int relayPin = 2; // Pin connected to the relay module

void setup() {
  pinMode(relayPin, OUTPUT);
}

void loop() {
  digitalWrite(relayPin, HIGH); // Turn on the relay
  delay(1000); // Wait for 1 second
  digitalWrite(relayPin, LOW); // Turn off the relay
  delay(1000); // Wait for 1 second
}
