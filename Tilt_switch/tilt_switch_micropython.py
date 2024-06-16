import machine
import time

# Set up the digital pin as an input
pin = machine.Pin(0, machine.Pin.IN)

while True:
    # Read the state of the tilt switch (0 = not tilted, 1 = tilted)
    tilt_state = pin.value()
    
    if tilt_state == 1:
        print("Tilted!")
    else:
        print("Not tilted")
        
    # Wait for a short period before taking another reading
    time.sleep(0.1)