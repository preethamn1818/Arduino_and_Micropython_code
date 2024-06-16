import machine

# Define pin connections for the Line Tracking Module
TRACKING_MODULE_PIN = machine.Pin(16)  # Replace with your module's pin connection

while True:
    # Read data from the Line Tracking Module
    tracking_data = TRACKING_MODULE_PIN.read()  # Replace with your module's read function

    if tracking_data == "WHITE":  # Assuming WHITE is a valid value for line detection
        print("Line detected!")
        # Perform actions when line is detected (e.g., move forward)
    elif tracking_data == "BLACK":
        print("No line detected!")
        # Perform actions when no line is detected (e.g., turn around)
    else:
        print("Unknown tracking data:", tracking_data)

    # Add a delay to prevent overwhelming the module with requests
    machine.sleep(0.01)