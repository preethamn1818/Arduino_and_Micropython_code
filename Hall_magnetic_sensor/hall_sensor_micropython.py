import machine
import time

# Define the GPIO pin connected to the Hall sensor
hall_sensor_pin = 0  # Replace with the actual pin number

# Initialize the pin as an input
machine.Pin(hall_sensor_pin, machine.Pin.IN)

while True:
    # Read the state of the Hall sensor
    hall_state = machine.Pin(hall_sensor_pin).value()
    
    if hall_state == 1:  # High signal indicates a magnetic field is present
        print("Magnetic field detected!")
    else:  # Low signal indicates no magnetic field is present
        print("No magnetic field detected.")
        
    # Wait for a short period before reading again
    time.sleep(0.1)