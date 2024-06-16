import machine
import time

# Define the pin connections for the heartbeat sensor
HEARTBEAT_PIN = machine.Pin(0, machine.Pin.IN)  # Replace with your sensor's pin number

# Set up the timer to read the heartbeat sensor regularly
heartbeat_timer = machine.Timer(-1)
heartbeat_timer.init(period=1000, mode=machine.Timer.PERIODIC, callback=lambda t: read_heartbeat())

def read_heartbeat():
    # Read the state of the heartbeat sensor pin
    heartbeat_state = HEARTBEAT_PIN.value()
    
    if heartbeat_state == 1:
        print("Heartbeat detected!")
    else:
        print("No heartbeat detected.")

while True:
    time.sleep(1)