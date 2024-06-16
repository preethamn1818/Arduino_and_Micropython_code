// Define the pin for the analog input from the temperature sensor
const int tempPin = A0;

void setup() {
  // Initialize the serial communication at a baud rate of 9600
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the temperature sensor
  int tempValue = analogRead(tempPin);

  // Convert the analog value to a digital value (temperature in degrees Celsius)
  float tempCelsius = (tempValue * 5.0 / 1023.0) - 50.0;

  // Print the temperature value to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(tempCelsius);
  Serial.println("°C");

  delay(1000); // Wait for 1 second before taking the next reading
}