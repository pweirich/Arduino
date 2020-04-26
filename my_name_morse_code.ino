/*
  My name in morse code


  Made 23 April 2020
  by Phillip Weirich
  
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  //p
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    long a
  delay(300);                       //     long b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    long a
  delay(300);                       //     long b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    // letter end a
  delay(300);                       //  letter end b

  //h
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    // letter end a
  delay(300);                       //  letter end b

  //i
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    // letter end a
  delay(300);                       //  letter end b

  //l
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    long a
  delay(300);                       //     long b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    // letter end a
  delay(300);                       //  letter end b
  
  //l
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    long a
  delay(300);                       //     long b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    // letter end a
  delay(300);                       //  letter end b

  //i
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    // letter end a
  delay(300);                       //  letter end b

  //p
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    long a
  delay(300);                       //     long b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    long a
  delay(300);                       //     long b
  digitalWrite(LED_BUILTIN, LOW);    //   mid letter a
  delay(100);                       //    mid letter b
  digitalWrite(LED_BUILTIN, HIGH);   //    short a
  delay(100);                       //     short b
  digitalWrite(LED_BUILTIN, LOW);    // word end a
  delay(700);                       //  word end b
}
