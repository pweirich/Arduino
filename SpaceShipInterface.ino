// Spaceship interface project
// Shines a green light unless a button is pressed
// Alternates flashing red lights when button is pressed

int switchState = 0;

void setup() {
  // setup the pins
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {

  //check pin 2 (the switch) to see if it is pressed or not
  switchState = digitalRead(2);

  // if not pressed, turn green on
  if (switchState == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }

  // if pressed, flash red lights
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250);

    // toggle red leds
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    delay(250);
  }

}
