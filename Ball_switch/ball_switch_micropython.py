import machine

# Define the pin connected to the ball switch
ball_switch_pin = 0

# Set up the pin as an input
machine.Pin(ball_switch_pin, mode=machine.Pin.IN)

while True:
    # Read the state of the ball switch pin
    ball_switch_state = machine.Pin.ball_switch_pin.value()

    if ball_switch_state == 1:
        print("Ball is present")
    else:
        print("Ball is not present")