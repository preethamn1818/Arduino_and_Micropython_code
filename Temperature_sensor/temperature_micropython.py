import machine
import ds18b20

# Initialize the DS18B20 library
ds = ds18b20.DS18B20(machine.Pin(0))  # Pin 0 is the default CS pin for the DS18B20

while True:
    # Read the temperature data from the sensor
    temp_data = ds.read_temperature()

    # Convert the raw data to a temperature value in Celsius
    temp_celsius = (temp_data >> 9) + 256.15

    # Print the temperature value
    print(f"Temperature: {temp_celsius:.2f}°C")

    # Wait for 1 second before taking the next reading
    machine.sleep(1000)