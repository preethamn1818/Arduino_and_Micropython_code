import machine
import time

# Set up the GPIO pin for the relay
relay_pin = machine.Pin(2, machine.Pin.OUT)  # Replace with your relay pin number

while True:
    # Turn the relay on
    relay_pin.value(1)
    print("Relay is ON")
    time.sleep(1)  # Wait for 1 second
    
    # Turn the relay off
    relay_pin.value(0)
    print("Relay is OFF")
    time.sleep(1)  # Wait for 1 second