/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 33
 * xht11
 * http://www.keyestudio.com
*/
#include "xht11.h"
//gpio22
xht11 xht(22);

unsigned char dht[4] = {0, 0, 0, 0};//only receive the data before 32 bit
void setup() {
  Serial.begin(9600);//enable the serial monitor and set baud rate to 9600
}

void loop() {
  if (xht.receive(dht)) { //return true
    Serial.print("RH:");
    Serial.print(dht[0]); //Integer part of humidity, dht[1] is the fractional part
    Serial.print("%  ");
    Serial.print("Temp:");
    Serial.print(dht[2]); //The integer part of the temperature, dht[3] is the fractional part
    Serial.println("C");
  } else {    //read errors
    Serial.println("sensor error");
  }
  delay(1500);  //wait for 1500ms

}
