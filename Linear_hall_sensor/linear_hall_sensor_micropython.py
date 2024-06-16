import machine
import utime

# Define the pin connected to the Hall sensor output
hall_pin = machine.Pin(0)  # Replace with your Hall sensor output pin

while True:
    # Read the state of the Hall sensor (0 or 1)
    hall_state = hall_pin.value()
    
    if hall_state == 1:  # Detects magnet presence
        print("Magnet detected!")
    else:  # Detects no magnet or other state
        print("No magnet detected.")
        
    utime.sleep(0.1)  # Adjust the delay to suit your application's requirements