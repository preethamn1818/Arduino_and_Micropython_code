import machine
import time

# Set up the PIR pin as an input
pir_pin = machine.Pin(0, machine.Pin.IN)

while True:
    # Read the PIR state
    pir_state = pir_pin.value()

    if pir_state == 1:  # Motion detected
        print("Motion detected!")
    else:  # No motion
        print("No motion")

    # Wait for a short period before taking another reading
    time.sleep(0.5)