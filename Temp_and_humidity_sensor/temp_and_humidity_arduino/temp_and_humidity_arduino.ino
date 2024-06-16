#include <DHT.h>

// Define the pin connections for the DHT11 sensor
#define DHTPIN 2     // Pin that the DHT11 data wire is connected to
#define DHTTYPE DHT11   // Type of sensor used (DHT11)

// Create a DHT instance
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Read temperature and humidity from the sensor
  float h = dht.getHumidity();
  float t = dht.getTemperature();

  // Print the results to the serial monitor
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println("%");

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");

  delay(2000); // wait 2 seconds before taking the next reading
}
