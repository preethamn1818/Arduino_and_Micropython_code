// Define the PIR sensor pin
const int pirSensorPin = 2; // Use any digital I/O pin for your PIR sensor
// Define the LED pin
const int ledPin =  13;    // Built-in LED on Arduino UNO board, change if using a different model or external LED

void setup() {
  // Initialize the serial communication at 9600 bps
  Serial.begin(9600);
  // Set the PIR sensor pin as INPUT for analog readings (depending on your sensor type, you may need to use digitalRead)
  pinMode(pirSensorPin, INPUT);
  // Set the LED pin as OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the value from the PIR sensor (make sure this matches how your specific sensor outputs data)
  int pirValue = analogRead(pirSensorPin);
  
  // You may need to adjust the threshold according to your sensor's sensitivity and environmental conditions.
  if (pirValue > THRESHOLD_VALUE) {
    // Motion is detected, turn on the LED
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
  } else {
    // No motion, turn off the LED
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion");
  }
  
  delay(5000); // Wait for 5 seconds before reading the sensor again (to avoid multiple triggers)
}
