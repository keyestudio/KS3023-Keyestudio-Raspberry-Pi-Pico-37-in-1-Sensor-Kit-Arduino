/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 49
 * smoke alarm
 * http://www.keyestudio.com
*/
#include "KETM1650.h" //import the library of TM1650
int val = 0; //display values
//two ports are GP14 and GP15
#define DIO 14
#define CLK 15
KETM1650 tm_4display(CLK, DIO);

void setup() {
  tm_4display.init(); //initialize
  tm_4display.setBrightness(3); //set brightness to 3，in the range of（1~8）
  pinMode(3, OUTPUT);//the active buzzer is connected to 3
}

void loop() {
  val = analogRead(26);//read analog values
  tm_4display.displayString(val);//4-digit segment display shows val
  if (val > 1000) {//analog value >100
    digitalWrite(3, HIGH); //buzzer beeps
  } else {//otherwise
    digitalWrite(3, LOW); //turn off the buzzer
  }
  delay(100);//delay in 100ms
}
