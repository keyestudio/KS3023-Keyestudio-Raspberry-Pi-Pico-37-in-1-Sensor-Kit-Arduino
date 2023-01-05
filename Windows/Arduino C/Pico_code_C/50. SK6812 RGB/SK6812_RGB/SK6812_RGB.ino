/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 50
   SK6812 RGB
   http://www.keyestudio.com
*/
#include"rgb.h"
RGB rgb(15, 4); //rgb(pin, num);  num = 0-100
//used to save the variable of RGB
int R = 0;
int G = 0;
int B = 0;
int num = 0;
void setup() {
  rgb.setBrightness(100); //rgb.setBrightness(0-255);
  delay(10);
  rgb.clear(); //Turn off all LEDs
  delay(10);
}

void loop() {
  num++;
  if (num > 3) {  //num is in the range of 0~3
    //Select a random integer between 0 and 255
    R = random(0, 255);
    G = random(0, 255);
    B = random(0, 255);
    num = 0;
  }
  rgb.setPixelColor(num, R, G, B); //set the color of num-1 light
  rgb.show();//display
  delay(100);//
}
