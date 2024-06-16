import machine
import time

# Define the pin connections for the laser emission module
Laser_Enable_Pin = 0  # Pin 0 is used as the enable pin (active high)
Laser_Duty_Cycle_Pin = 2  # Pin 2 is used as the duty cycle input pin
Laser_Frequency_Pin = 4  # Pin 4 is used as the frequency input pin

# Set up the pin connections as output pins
machine.Pin(Laser_Enable_Pin, machine.Pin.OUT)
machine.Pin(Laser_Duty_Cycle_Pin, machine.Pin.OUT)
machine.Pin(Laser_Frequency_Pin, machine.Pin.OUT)

while True:
    # Enable the laser emission module (active high)
    machine.Pin(Laser_Enable_Pin).value(1)
    
    # Set the duty cycle of the laser emission (0-100%)
    machine.Pin(Laser_Duty_Cycle_Pin).value(50)  # Example: 50% duty cycle
    
    # Set the frequency of the laser emission (Hz)
    machine.Pin(Laser_Frequency_Pin).value(20000)  # Example: 20 kHz frequency
    
    time.sleep(1)  # Wait for 1 second
    
    # Disable the laser emission module
    machine.Pin(Laser_Enable_Pin).value(0)
    
    time.sleep(1)  # Wait for 1 second