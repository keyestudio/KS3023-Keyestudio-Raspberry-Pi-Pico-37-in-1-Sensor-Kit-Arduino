/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 35
   TM1650 Four digital tube
   http://www.keyestudio.com
*/
#include "KETM1650.h" //import the library file of TM1650
int item = 0; //display value
//pins are GP14 and GP15
#define DIO 14
#define CLK 15
KETM1650 tm_4display(CLK, DIO);

void setup() {
  tm_4display.init(); //initialize
  tm_4display.setBrightness(3); //set brightness to 3，in the range of 1~8
}

void loop() {
  tm_4display.displayString(item);//the 4-digit tube display will show item value
  item = item + 1;  //add 1
  if (item > 9999) {  //when adding to 9999, clear up
    item = 0;
  }
  delay(100); //delay in 100ms
}
