import machine
from machine import ADC

# Define constants for joystick pins
JOYSTICK_X_PIN = 'GP12'  # ESP32 Pin 12 (ADC0)
JOYSTICK_Y_PIN = 'GP13'  # ESP32 Pin 13 (ADC1)

# Set up analog inputs for joystick X and Y axes
x_adc = machine.ADC(machine.Pin(JOYSTICK_X_PIN))
y_adc = machine.ADC(machine.Pin(JOYSTICK_Y_PIN))

while True:
    # Read joystick values (0-4095 range)
    x_value = x_adc.read_u16()
    y_value = y_adc.read_u16()

    # Scale values to 0-100 range for easier use
    x_scaled = int((x_value / 4095) * 100)
    y_scaled = int((y_value / 4095) * 100)

    print(f"Joystick X: {x_scaled}, Y: {y_scaled}")

    # Perform actions based on joystick values (e.g., move a robot, control a game)
    if x_scaled > 50:
        # Move robot forward
        machine.Pin(machine.Pin.D4, machine.Pin.OUT).value(1)  # Turn on LED D4 for example
        machine.delay(10)
    elif x_scaled < -50:
        # Move robot backward
        machine.Pin(machine.Pin.D4, machine.Pin.OUT).value(0)  # Turn off LED D4 for example
        machine.delay(10)

    if y_scaled > 50:
        # Move robot up
        machine.Pin(machine.Pin.D5, machine.Pin.OUT).value(1)  # Turn on LED D5 for example
        machine.delay(10)
    elif y_scaled < -50:
        # Move robot down
        machine.Pin(machine.Pin.D5, machine.Pin.OUT).value(0)  # Turn off LED D5 for example
        machine.delay(10)

    machine.delay(20)  # Adjust delay to suit your application