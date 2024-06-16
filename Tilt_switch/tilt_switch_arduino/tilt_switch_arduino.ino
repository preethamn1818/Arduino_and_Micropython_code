const int tiltPin = A0; // Pin connected to the tilt switch output
int tiltValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read the value of the tilt switch
  tiltValue = analogRead(tiltPin);

  // Map the value to a binary state (0 or 1)
  int tilted = map(tiltValue, 0, 1023, 0, 1);

  // Print the result to the serial monitor
  Serial.print("Tilted: ");
  Serial.println(tilted);

  delay(50); // Debounce and sample rate
}
