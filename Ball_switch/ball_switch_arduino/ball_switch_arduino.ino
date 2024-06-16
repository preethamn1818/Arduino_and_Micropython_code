// Define the pin that the ball switch is connected to
const int ballSwitchPin = 2;

void setup() {
  // Set the ball switch pin as an input
  pinMode(ballSwitchPin, INPUT);
}

void loop() {
  // Read the state of the ball switch
  int ballSwitchState = digitalRead(ballSwitchPin);

  if (ballSwitchState == HIGH) {
    // The ball is present in the switch
    Serial.println("Ball detected!");
  } else {
    // The ball is not present in the switch
    Serial.println("No ball detected.");
  }

  delay(100); // Wait for 100ms before checking again
}
