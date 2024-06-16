import machine
import time

# Define the pin for the button
button_pin = 0  # Replace with the actual pin number

# Set up the digital input on the specified pin
button = machine.Pin(button_pin, machine.Pin.IN)

while True:
    # Read the state of the button (0 = low, 1 = high)
    button_state = button.value()
    
    if button_state == 1:
        print("Button pressed!")
        # Do something when the button is pressed (e.g. turn on an LED)
        # ...
    else:
        print("Button released")
        
    time.sleep(0.01)  # Delay for a short period to avoid excessive CPU usage