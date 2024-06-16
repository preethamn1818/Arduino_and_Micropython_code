import machine
import time

# Define the pin connections for the ultrasonic sensor
TRIGGER_PIN = 0  # Pin 0 (GPIO 16) on the ESP32 board
ECHO_PIN = 2    # Pin 2 (GPIO 4) on the ESP32 board

# Initialize the trigger and echo pins as outputs and inputs, respectively
machine.Pin(TRIGGER_PIN, machine.Pin.OUT).value(0)
machine.Pin(ECHO_PIN, machine.Pin.IN)

while True:
    # Set the trigger pin high for 10 microseconds to initiate a measurement
    machine.Pin(TRIGGER_PIN, machine.Pin.OUT).value(1)
    time.sleep_us(10)
    machine.Pin(TRIGGER_PIN, machine.Pin.OUT).value(0)

    # Measure the echo pin state until it goes high, indicating the start of the echo pulse
    while machine.Pin(ECHO_PIN, machine.Pin.IN).value() == 0:
        pass

    # Measure the duration of the echo pulse in microseconds
    start_time = time.ticks_us()
    while machine.Pin(ECHO_PIN, machine.Pin.IN).value() == 1:
        pass
    end_time = time.ticks_us()

    # Calculate the distance using the speed of sound (approximately 340 m/s)
    distance_cm = (end_time - start_time) / 58.0

    print("Distance:", distance_cm, "cm")

    # Wait for a short period before taking another measurement
    time.sleep(0.1)