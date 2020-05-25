/*
 * DS18b20 Thermometer
 * 
 * Testing my new DS18b20 Thermometer
 * The core of the code for the thermometer is from Konstantin Dimitrov
 * via https://create.arduino.cc/projecthub/TheGadgetBoy/ds18b20-digital-temperature-sensor-and-arduino-9cc806
 * The rest of the code to display the measurements on the LCD display 
 * is drawn from code written for Projects 3 and 11 in Arduino Projects Book
 *  
 * Phillip Weirich
 * 4 May 2020
 *  
 *//********************************************************************/

#include <OneWire.h> 
#include <DallasTemperature.h>
#include <LiquidCrystal.h>  // import the LiquidCrystal library for interface with LCD display
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // set which Arduino pins will be communicating with the display

#define ONE_WIRE_BUS 7  // Data wire is plugged into pin 7 on the Arduino  (PW: Why is this used and not what I've done before --> const int sensorPin = 7; 

/********************************************************************/
// Setup a oneWire instance to communicate with any OneWire devices  
// (not just Maxim/Dallas temperature ICs) 
OneWire oneWire(ONE_WIRE_BUS); 
/********************************************************************/
// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);
/********************************************************************/ 
void setup(void) 
{ 
 // start serial port 
 Serial.begin(9600); 
 
 Serial.println("Dallas Temperature IC Control Library Demo"); 
 // Start up the library 
 sensors.begin(); 

  lcd.begin(16, 2);         // sets the dimensions of the display
  pinMode(7, INPUT);  // sets the temperature sensor as an input
} 
void loop(void) 
{ 
 // call sensors.requestTemperatures() to issue a global temperature 
 // request to all devices on the bus 
 
/********************************************************************/

 //Serial.print(" Requesting temperatures..."); 
 sensors.requestTemperatures(); // Send the command to get temperature readings 
 //Serial.println("DONE"); 

float temperatureC = sensors.getTempCByIndex(0);
    // Why "byIndex"?
   // You can have more than one DS18B20 on the same bus.  
   // 0 refers to the first IC on the wire 

float temperatureF = (temperatureC/5*9+32);
 
/********************************************************************/
 Serial.print("Temperature is: "); 
 Serial.print(temperatureC);   
 Serial.print("C ");
 Serial.print(temperatureF);
 Serial.println("F");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(temperatureF);
  lcd.print((char)223);
  lcd.print("F");
  
  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print((char)223);
  lcd.print("C");
   
   delay(30000); 
} 
