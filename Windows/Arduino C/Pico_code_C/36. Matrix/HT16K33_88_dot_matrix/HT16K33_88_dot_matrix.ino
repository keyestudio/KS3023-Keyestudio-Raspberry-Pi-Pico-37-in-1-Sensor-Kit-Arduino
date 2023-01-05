/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 36
   HT16K33 8*8 dot matrix
   http://www.keyestudio.com
*/
#include <Matrix.h>//the library of the dot matrix

Matrix myMatrix(20, 21);
uint8_t  LEDArray[8];

const uint8_t LedArray1[8] PROGMEM = {0x00, 0x18, 0x3c, 0x7e, 0xff, 0xff, 0x66, 0x00};//heart beat pattern

void setup() {
  myMatrix.begin(0x70);//iic address
  myMatrix.clear();//clear up
  myMatrix.setBrightness(5);//brightness is 5, in the range of 0~15
}

void loop() {
  memcpy_P(&LEDArray, &LedArray1, 8);
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if ((LEDArray[i] & 0x01))
        myMatrix.drawPixel(j, i, 1);
      else
        myMatrix.drawPixel(j, i, 0);
      LEDArray[i] = LEDArray[i] >> 1;
    }
  }
  myMatrix.write(); //display

}
