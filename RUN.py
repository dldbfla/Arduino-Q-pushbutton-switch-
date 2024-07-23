import serial
import os
import time
import pyautogui

# Function to check for available ports
def find_arduino_port():
    import serial.tools.list_ports
    ports = serial.tools.list_ports.comports()
    for port in ports:
        if 'Arduino' in port.description:
            return port.device
    return None

# find the Arduino port
port = find_arduino_port()
if port is None:
    print(“Arduino not found, check connection status.”)
    exit()

baud_rate = 9600

while True:
    try:
        ser = serial.Serial(port, baud_rate, timeout=1)
        break
    except serial.SerialException:
        print(f“Port {port} is busy or unavailable. Retrying...”)
        time.sleep(1)

while True:
    line = ser.readline().decode('utf-8').strip()
    if line == “SLEEP”:
        # Press the 'q' key once.
        pyautogui.press('q')
