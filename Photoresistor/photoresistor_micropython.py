import machine

# Pin connections
pin = machine.Pin(0, machine.Pin.IN)

while True:
    # Read the value of the photodiode
    val = pin.value()
    
    # Map the value to a brightness level (0-255)
    brightness = int((val * 256) / 1024)
    
    print("Brightness:", brightness)