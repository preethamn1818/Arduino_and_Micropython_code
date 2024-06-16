import machine
import utime

# Define the analog-to-digital converter (ADC) pin on the MCU
adc_pin = machine.ADC(0)  # Replace with your ADC pin number

# Define the temperature sensor's pins
vref_pin = 2  # Vref pin
temp_pin = 3  # Temperature sensor pin

# Initialize the ADC and set its resolution to 12 bits (4096 steps)
adc = machine.ADC(adc_pin, bits=12)

while True:
    # Read the analog voltage from the temperature sensor
    temp_voltage = adc.read_temp(vref_pin, temp_pin)

    # Convert the analog voltage to a digital value
    temp_value = int(temp_voltage * 4096 / 5)  # Assuming 5V reference

    # Calculate the temperature in Celsius using the sensor's datasheet formula
    temp_celsius = (temp_value - 500) / 10.0

    print("Temperature: {:.1f}°C".format(temp_celsius))

    # Wait for 1 second before taking another reading
    utime.sleep(1)