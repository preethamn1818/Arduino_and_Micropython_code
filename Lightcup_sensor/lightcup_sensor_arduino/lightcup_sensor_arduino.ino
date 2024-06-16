const int sensorPin = A0;  // Analog input pin for the Light Cup Sensor
const int ledPin = 13;    // Digital output pin for an LED indicator

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // Read the voltage level from the sensor
  int brightness = map(sensorValue, 0, 1023, 0, 255);  // Map the value to a brightness level (0-255)

  // Use the brightness level to control an LED or display on an LCD screen
  analogWrite(ledPin, brightness);
}
