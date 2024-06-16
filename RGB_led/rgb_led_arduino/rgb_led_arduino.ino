// Pin connections:
const int redPin = 9;     // Red LED pin
const int greenPin = 10;  // Green LED pin
const int bluePin = 11;   // Blue LED pin

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Set the RGB values (0-255)
  analogWrite(redPin, 128);  // Red value
  analogWrite(greenPin, 64);  // Green value
  analogWrite(bluePin, 192);  // Blue value

  delay(1000);  // Wait for 1 second

  // Change the RGB values to a different color
  analogWrite(redPin, 255);
  analogWrite(greenPin, 128);
  analogWrite(bluePin, 64);

  delay(1000);  // Wait for 1 second
}
