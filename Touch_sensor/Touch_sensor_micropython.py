import machine

# Define pin connections
touch_pin = machine.Pin(0)  # Replace with your touch sensor pin

while True:
    # Read the state of the touch sensor
    touch_state = machine.input(touch_pin)
    
    if touch_state.value() == 1:  # Touch detected
        print("Touch detected!")
    else:
        print("No touch detected.")