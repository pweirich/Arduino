/*
 * Crystal Ball
 * 
 * Based on Project 11 in Arduino Projects Book
 *  
 * Phillip Weirich
 * 30 April 2020
 *  
 */

 #include <LiquidCrystal.h>  // import the LiquidCrystal library for interface with LCD display
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // set which Arduino pins will be communicating with the display

 const int switchPin = 6;   // the pin the tilt sensor is connected to
 int switchState = 0;       // the current state of the switch
 int prevSwitchState = 0;   // the previous state of the switch
 int reply;                 // variable that holds the reply of the crystal ball

 void setup() {
  lcd.begin(16, 2);         // sets the dimensions of the display
  pinMode(switchPin, INPUT);  // sets the tilt sensor as an input

// The welome screen is declared in the setup, though I'm not sure why
  lcd.print("Ask the");     // the first line of text (automatically starts on top left)
  lcd.setCursor(0, 1);      // move the cursor down to the left of the second line
  lcd.print("Crystal Ball!"); // second line of text
 }

void loop() {
  switchState = digitalRead(switchPin);

  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      reply = random(8);
      
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The ball says: ");
      lcd.setCursor(0, 1);

      switch(reply){
        
        case 0:
        lcd.print("Yes");
        break;

        case 1:
        lcd.print("Most likely");
        break;

        case 2:
        lcd.print("Certainly");
        break;

        case 3:
        lcd.print("Outlook good");
        break;

        case 4:
        lcd.print("Unsure");
        break;

        case 5:
        lcd.print("Ask again");
        break;

        case 6:
        lcd.print("Doubtful");
        break;

        case 7:
        lcd.print("No");
        break;
      }
    }
  }

prevSwitchState = switchState;  
}
 
