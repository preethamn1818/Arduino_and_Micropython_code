import machine
import time

# Define the pins for the rotary encoder
encoder_pin_A = 0  # Pin 0 for the A channel
encoder_pin_B = 1  # Pin 1 for the B channel

# Create a digital input object for each pin
encoder_A = machine.Pin(encoder_pin_A, machine.Pin.IN)
encoder_B = machine.Pin(encoder_pin_B, machine.Pin.IN)

# Define the direction of rotation (0 = clockwise, 1 = counter-clockwise)
direction = 0

while True:
    # Read the state of the A and B pins
    a_state = encoder_A.value()
    b_state = encoder_B.value()

    # Calculate the position of the encoder (0-23 positions)
    if a_state == 1:
        if b_state == 1:
            position = position + 1
        else:
            position = position - 1
    elif a_state == 0:
        if b_state == 1:
            position = position + 2
        else:
            position = position - 2

    # Adjust the direction of rotation based on the current state
    if (a_state == 1 and b_state == 1) or (a_state == 0 and b_state == 0):
        direction = 0  # Clockwise
    elif (a_state == 1 and b_state == 0) or (a_state == 0 and b_state == 1):
        direction = 1  # Counter-clockwise

    print(f"Position: {position}, Direction: {direction}")

    # Delay to avoid overloading the microcontroller
    time.sleep_ms(10)