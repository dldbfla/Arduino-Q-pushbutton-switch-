# Arduino-Q-pushbutton-switch-

![스크린샷 2024-07-23 142854](https://github.com/user-attachments/assets/c82a7d82-85fb-4b24-a3c7-c2a146c93f36)

## Connect the wiring:
Connect the VCC pin of the pushbutton module to the 5V pin of the Arduino.
Connect the GND pin of the pushbutton module to the GND pin of the Arduino.
Connect the OUT pin of the pushbutton module to a digital pin on the Arduino (for example, D2).

## Caution:
In the Python code, you will need to change the 'COM3' in ser = serial.Serial('COM3', 9600) to the serial port your Arduino is actually connected to.
