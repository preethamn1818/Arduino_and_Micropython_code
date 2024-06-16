// Pin definitions
const int heartRatePin = A0; // Analog input pin for heart rate sensor
const int ledPin = 13; // Digital output pin for LED indicator

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  int heartRateValue = analogRead(heartRatePin); // Read heart rate value from sensor
  float heartRate = map(heartRateValue, 0, 1023, 0, 200); // Map value to heart rate range (bpm)

  // Print heart rate value to serial monitor
  Serial.print("Heart Rate: ");
  Serial.println(heartRate);

  // Blink LED indicator based on heart rate value
  if (heartRate > 100) {
    digitalWrite(ledPin, HIGH); // Fast blink for high heart rates
  } else if (heartRate < 60) {
    digitalWrite(ledPin, LOW); // Slow blink for low heart rates
  } else {
    digitalWrite(ledPin, !digitalRead(ledPin)); // Toggle LED on/off for normal heart rates
  }

  delay(50); // Update heart rate value every 50ms
}
