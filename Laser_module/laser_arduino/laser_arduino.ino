const int laserPin = 9; // Pin connected to the laser module's enable pin
const int pwmFrequency = 50000; // Frequency of the PWM signal (50 kHz)
const int pwmResolution = 8; // Resolution of the PWM signal (8-bit)

void setup() {
  pinMode(laserPin, OUTPUT); // Set the pin as an output

  // Initialize the Timer1 library to generate a PWM signal
  TCCR1A = _BV(COM1A1) | _BV(WGM10);
  TCCR1B = _BV(WGM12) | _BV(CS10);
  OCR1A = pwmResolution; // Set the PWM period

  // Initialize the laser pin as an output
  digitalWrite(laserPin, LOW);
}

void loop() {
  // Turn on the laser at 50% duty cycle for 1 second
  analogWrite(laserPin, 128);
  delay(1000);

  // Turn off the laser
  analogWrite(laserPin, 0);
  delay(1000);
}
