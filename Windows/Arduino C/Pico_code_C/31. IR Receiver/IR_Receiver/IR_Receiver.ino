/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 31
   IR Receiver
   http://www.keyestudio.com
*/
#include"ir.h"
IR IRreceive(16);
////////////////////
void setup() {
  Serial.begin(9600);
  delay(1000);
}
//////////////////// 
void loop() {
  Serial.println("IR receive");
  while(1){
    int key = IRreceive.getKey();
    if(key != -1)
       Serial.println(key);     
  }
}
