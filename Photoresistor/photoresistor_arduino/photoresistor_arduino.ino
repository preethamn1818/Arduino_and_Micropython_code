const int photoResistorPin = A0; // Pin for the photoresistor
int photoResistorValue = 0; // Variable to store the analog value from the photoresistor

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
}

void loop() {
  photoResistorValue = analogRead(photoResistorPin); // Read the analog value from the photoresistor
  int lightLevel = map(photoResistorValue, 0, 1023, 0, 100); // Map the analog value to a percentage (0-100)
  
  Serial.print("Light Level: ");
  Serial.print(lightLevel);
  Serial.println("%");
  
  delay(100); // Wait for 100ms before taking the next reading
}
