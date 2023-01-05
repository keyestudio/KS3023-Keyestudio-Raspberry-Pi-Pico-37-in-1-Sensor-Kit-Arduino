/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 27
 * 6812 RGB LED
 * http://www.keyestudio.com
*/
#include"rgb.h"

RGB rgb(16,4);                        //rgb(pin, num);  num = 0-100
///////////////////////////////////////////////////////////////////////////////////
void setup() {
  rgb.setBrightness(100);            //rgb.setBrightness(0-255);
  delay(10);
  rgb.clear();                       //Turn off all leds  
  delay(10);
}
///////////////////////////////////////////////////////////////////////////////////
void loop() {
  while(1){  
    rgb.setPixelColor(0,255,0,0);      //rgb.setPixelColor(num,r,g,b);   num = 0-100
    rgb.setPixelColor(1,0,255,0);      //rgb.setPixelColor(num,r,g,b);   num = 0-100
    rgb.setPixelColor(2,0,0,255);      //rgb.setPixelColor(num,r,g,b);   num = 0-100
    rgb.setPixelColor(3,255,255,255);  //rgb.setPixelColor(num,r,g,b);   num = 0-100
    rgb.show();
    delay(1000);
  }
}
