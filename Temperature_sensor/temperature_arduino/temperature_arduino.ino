// Define the pin connections for the temperature sensor
const int tempPin = A0; // Analog input pin for the temperature sensor

void setup() {
  Serial.begin(9600); // Initialize the serial communication at 9600 bps
}

void loop() {
  int reading = analogRead(tempPin); // Read the analog value from the temperature sensor
  float voltage = reading * (5.0 / 1024.0); // Convert the analog value to a voltage
  float temperature = (voltage - 0.5) * 100; // Calculate the temperature in degrees Celsius

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  delay(1000); // Wait 1 second before taking the next reading
}
