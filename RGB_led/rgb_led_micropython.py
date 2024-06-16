import machine

# Set up the GPIO pins for the RGB LED
red_pin = 0
green_pin = 1
blue_pin = 2

# Initialize the GPIO pins as output
machine.Pin(red_pin, machine.Pin.OUT)
machine.Pin(green_pin, machine.Pin.OUT)
machine.Pin(blue_pin, machine.Pin.OUT)

while True:
    # Set the RGB values (0-255 for each color)
    red_value = 128
    green_value = 64
    blue_value = 192

    # Write the RGB values to the GPIO pins
    machine.PWM(red_pin).duty_cycle(int((red_value / 255.0) * 10000))
    machine.PWM(green_pin).duty_cycle(int((green_value / 255.0) * 10000))
    machine.PWM(blue_pin).duty_cycle(int((blue_value / 255.0) * 10000))

    # Wait for a short period of time before changing the color
    import utime
    utime.sleep(0.1)