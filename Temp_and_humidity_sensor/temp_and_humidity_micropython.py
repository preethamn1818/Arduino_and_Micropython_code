import dht
import machine

# Initialize the DHT11/DHT22 sensor pin
dht_pin = machine.Pin(4)  # Replace with your sensor pin number

# Create an instance of the DHT class
dht_sensor = dht.DHT11(dht_pin)

while True:
    try:
        # Read temperature and humidity data from the sensor
        temp, hum = dht_sensor.read()
        
        # Print the data to the console
        print("Temperature: {:.1f}°C".format(temp))
        print("Humidity: {:.1f}%".format(hum))
        
    except Exception as e:
        print("Error reading sensor:", str(e))
        time.sleep(2)  # Wait for 2 seconds before trying again

    # Wait for 10 seconds between readings
    time.sleep(10)