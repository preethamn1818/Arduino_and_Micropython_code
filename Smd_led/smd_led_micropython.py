import machine

# Define the pins for the RGB LEDs
R = machine.Pin(0)  # Red
G = machine.Pin(1)  # Green
B = machine.Pin(2)  # Blue

# Set the pin modes to output
R.init(machine.Pin.OUT)
G.init(machine.Pin.OUT)
B.init(machine.Pin.OUT)

def set_color(r, g, b):
    R.value(r)
    G.value(g)
    B.value(b)

while True:
    # Set a random color
    r = int(random.random() * 255)
    g = int(random.random() * 255)
    b = int(random.random() * 255)
    set_color(r, g, b)
    time.sleep(0.1)