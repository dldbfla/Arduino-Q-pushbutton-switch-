const int buttonPin = 2; // pin number the push button is connected to
int buttonState = 0; // current button state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as a pull-up input
  Serial.begin(9600); // Start serial communication
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the button state

  if (buttonState == LOW) { // Check if the button is pressed
    Serial.println(“SLEEP”); // send “SLEEP” signal to the serial port
    delay(500); // slight delay for debouncing
  }
}
