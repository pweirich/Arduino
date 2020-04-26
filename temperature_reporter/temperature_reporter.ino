/* 
 *  Basic temperature reporter
 *  
 *  Based on Project 03 in Arduino Projects Book
 *  
 *  Phillip Weirich
 *  26 April 2020
 *  
 */

 const int sensorPin = A0; // Define analog sensor pin position
 const float baselineTemp = 20.0; // Manually set baseline temperature. This can be adjusted later. It can also be calibrated automatically.

 void setup() {
  Serial.begin(9600); // open a serial port so I can track the analog input from my computer screen.

  for(int pinNumber = 2; pinNumber<5; pinNumber++){ // This is a "quick" way of setting up multiple pins. I don't quite understand it right now, but maybe it will make sense when the example really requires it. 
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
 }

 void loop() {
  int sensorVal = analogRead(sensorPin); // Variable that stores the value of the sensor

  Serial.print("Sensor Value: ");  // These two lines print the value to the serial port
  Serial.print(sensorVal);

  // convert teh ADC reading to voltage and print
  float voltage = (sensorVal/1024.0) * 5.0;
  Serial.print(", Volts: ");
  Serial.print(voltage);

  // convert voltage to temperadure in degrees C
  float temperature = (voltage - 0.5) * 100;
//  Serial.print(", degrees C: ");
//  Serial.println(temperature);  // the "ln" part in the function name means add a new line *after* the value is printed
    Serial.print(", degrees F: ");
    Serial.println(temperature/5*9+32);


  if(temperature < baselineTemp+2){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }else if(temperature >= baselineTemp+2 && 
    temperature < baselineTemp+4){
     digitalWrite(2, HIGH);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
   }else if(temperature >= baselineTemp+4 &&
     temperature < baselineTemp+6){
     digitalWrite(2, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(4, LOW);
    }else if(temperature >= baselineTemp+6){
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }
    delay(100);
 }
