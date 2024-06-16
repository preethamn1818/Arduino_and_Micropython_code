import machine
import utime

# Define the IR pin and its corresponding GPIO number
ir_pin = 2  # GPIO 2 on ESP32

# Set up the IR LED and resistor
ir_led = machine.Pin(ir_pin, machine.Pin.OUT)
ir_resistor = 220  # Ohms, adjust to your needs

def transmit_ir_code(code):
    # Convert the IR code to a binary string (1s and 0s)
    ir_binary = "".join("1" if bit else "0" for bit in code)

    # Send the IR signal
    for bit in ir_binary:
        if bit == "1":
            ir_led.high()
            utime.sleep(10 / 1000000)  # 10 us high pulse
        else:
            ir_led.low()
            utime.sleep(40 / 1000000)  # 40 us low pulse

    # End of transmission (mark)
    ir_led.low()
    utime.sleep(100 / 1000000)  # 100 us mark

# Example IR code: a simple on/off command
ir_code = [1, 0, 1, 0, 0, 1, 0, 1]  # Replace with your desired IR code

transmit_ir_code(ir_code)