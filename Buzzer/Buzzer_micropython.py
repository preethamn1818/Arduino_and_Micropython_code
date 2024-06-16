import machine
import utime

# Define the pin for the buzzer
buzzer_pin = 16

# Set up the pin as an output
buzzer = machine.Pin(buzzer_pin, machine.Pin.OUT)

while True:
    # Turn on the buzzer for 0.5 seconds
    buzzer.value(1)
    utime.sleep_ms(500)

    # Turn off the buzzer for 0.5 seconds
    buzzer.value(0)
    utime.sleep_ms(500)