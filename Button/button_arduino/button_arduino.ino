const int buttonPin = 2; // Pin connected to the button

void setup() {
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    Serial.println("Button pressed!");
  } else {
    Serial.println("Button not pressed");
  }
}
