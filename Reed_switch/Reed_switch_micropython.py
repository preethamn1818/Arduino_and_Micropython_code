import machine

# Define the pin for the Reed Switch
reed_switch_pin = 0

# Create a digital input object on the specified pin
reed_switch = machine.Pin(reed_switch_pin, machine.Pin.IN)

while True:
    # Read the state of the Reed Switch
    switch_state = reed_switch.value()
    
    if switch_state == 1:  # Reed Switch is closed
        print("Reed Switch is closed")
    elif switch_state == 0:  # Reed Switch is open
        print("Reed Switch is open")