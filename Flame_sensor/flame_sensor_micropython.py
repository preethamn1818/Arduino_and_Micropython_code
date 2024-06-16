import machine
import time

# Define the pin connections for the flame sensor
FLAME_SENSOR_PIN = 0  # Replace with the actual pin number

# Set up the digital input pin for the flame sensor
flame_sensor_pin = machine.Pin(FLAME_SENSOR_PIN, machine.Pin.IN)

while True:
    # Read the state of the flame sensor pin
    flame_detected = flame_sensor_pin.value()

    if flame_detected:
        print("Flame detected!")
    else:
        print("No flame detected.")

    # Delay for 1 second before checking again
    time.sleep(1)