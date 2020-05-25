/*
  My name in morse code


  Made 23 April 2020
  by Phillip Weirich

  Revised 25 April 2020
  Added pin variable
  Created functions for code chunks
  
*/

// create variable to declare which pin to flash

// int signalPin = 3 ;
int signalPin = LED_BUILTIN ;  // if you don't have pin 4 connected to an LED


// Define dot and dash sequences as well as end of letter and word

void dot() {
  digitalWrite(signalPin, HIGH);   //    short a
  delay(100);                       //   short b
  digitalWrite(signalPin, LOW);    //   mid letter a
  delay(100);                       //  mid letter b
}

void dash() {
  digitalWrite(signalPin, HIGH);   //    long a
  delay(300);                       //   long b
  digitalWrite(signalPin, LOW);    //   mid letter a
  delay(100);                       //  mid letter b
}

void endLetter() {
  digitalWrite(signalPin, LOW);    //   letter end a
  delay(200);                       //  letter end b
}

void endWord() {
  digitalWrite(signalPin, LOW);    //   word end a
  delay(600);                       //  word end b
}


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize output pin.
  pinMode(signalPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  //p
  dot();
  dash();
  dash();
  dot();
  endLetter();

  //h
  dot();
  dot();
  dot();
  dot();
  endLetter();

  //i
  dot();
  dot();
  endLetter();

  //l
  dot();
  dash();
  dot();
  dot();
  endLetter();
  
  //l
  dot();
  dash();
  dot();
  dot();
  endLetter();

  //i
  dot();
  dot();
  endLetter();

  //p
  dot();
  dash();
  dash();
  dot();
  endWord();
}
