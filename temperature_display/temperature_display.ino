/*
 * Temperature Display
 * 
 * An indoor thermometer displaying temperature in farenheit
 * Borrowing code from Projects 3 and 11 in Arduino Projects Book
 *  
 * Phillip Weirich
 * 30 April 2020
 *  
 */

 #include <LiquidCrystal.h>  // import the LiquidCrystal library for interface with LCD display
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // set which Arduino pins will be communicating with the display

 const int sensorPin = A0;   // the analog pin the temperature sensor is connected to

 void setup() {
  Serial.begin(9600);       // open a serial port so I can track the analog input from my computer screen.
  
  lcd.begin(16, 2);         // sets the dimensions of the display
  pinMode(sensorPin, INPUT);  // sets the temperature sensor as an input
 }

void loop() {
  int sensorVal = analogRead(sensorPin); // Variable that stores the value of the sensor

  Serial.print("Sensor Value: ");  // These two lines print the value to the serial port
  Serial.print(sensorVal);

  // convert the ADC reading to voltage and print
  float voltage = (sensorVal/1024.0) * 5.0;
  Serial.print(", Volts: ");
  Serial.print(voltage);

  // convert voltage to temperature in degrees C
  float temperature = (voltage - 0.5) * 100;
//  Serial.print(", degrees C: ");
//  Serial.println(temperature);  // the "ln" part in the function name means add a new line *after* the value is printed
  int celciusToLCD = temperature; // convert celcius to integer so no decimals appear
    
  float farenheit = (temperature/5*9+32);
  Serial.print(", degrees F: ");
  Serial.println(farenheit);
  int farenheitToLCD = farenheit; // convert farenheit to integer so no decimals appear

      
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(farenheitToLCD);
  lcd.print((char)223);
  lcd.print("F");
  
  lcd.setCursor(0, 1);
  lcd.print(celciusToLCD);
  lcd.print((char)223);
  lcd.print("C");

  delay(3000);
}
 
