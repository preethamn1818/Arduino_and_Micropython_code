import machine
import time

# Define the ADC pin connected to the Light Cup sensor's output
adc_pin = machine.ADC(0)  # Pin A0 on LoPy

while True:
    # Read the analog value from the sensor
    adc_value = adc_pin.read_u16()
    
    # Convert the analog value to a voltage (assuming 3.3V reference)
    voltage = (adc_value * 3.3) / 65535
    
    # Map the voltage to a light intensity value (0-100%)
    light_intensity = int((voltage - 1.65) / 1.68 * 100)
    
    print(f"Light Intensity: {light_intensity}%")
    
    time.sleep(1)