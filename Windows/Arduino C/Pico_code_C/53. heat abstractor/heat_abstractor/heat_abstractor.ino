/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 53
 * heat abstractor
 * http://www.keyestudio.com
*/
#include <DS18B20.h>
#include "KETM1650.h" //import the library of TM1650
//two ports are GP14 and GP15
#define DIO 14
#define CLK 15
KETM1650 tm_4display(CLK, DIO);

//ds18b20 pin to 3
DS18B20 ds18b20(3);
void setup() {
  Serial.begin(9600);
  tm_4display.init(); //initialize
  tm_4display.setBrightness(3); //set brightness to 3，范围（1~8）
  //电机接20 21
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
}

void loop() {
  double temp = ds18b20.GetTemp();//read temperature
  temp *= 0.0625;//convert to 0.0625/LSB
  Serial.println(temp);
  tm_4display.displayString(int(temp));//display temperature value
  if (temp > 25) {//>25℃，turn on the fan
    digitalWrite(20, LOW);
    digitalWrite(21, HIGH);
  } else {//or, turn off the fan
    digitalWrite(20, LOW);
    digitalWrite(21, LOW);
  }
  delay(100);
}
