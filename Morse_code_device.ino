/*
 * Morse code device
 * Click a button, turn on an LED
 */

int signalPin = 3;  // pin LEd is connected to
int buttonPin = 2;  // pin switch is connected to

int switchState = 0;  // initialize button state 

void setup() {
  pinMode(signalPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

  // check is button is pressed or not
  switchState = digitalRead(buttonPin);

  // if not pressed, LED is off
  if (switchState == LOW) {
    digitalWrite(signalPin, LOW);
  }

  // if pressed, LED is on
  else {
    digitalWrite(signalPin, HIGH);
  }

}
