/*********************************************
 * 1. Only for raspberry PI Pico
 * 2. Only suitable for 125M crystal oscillator
 * 3. date：2021-12-3
 * 4. programmer: jieliang mo
 * 5. https://github.com/earlephilhower/arduino-pico/
 * 6. https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json
 *********************************************/
#ifndef RGB_H_
#define RGB_H_ 
#include <Arduino.h>

//digitalWrite(6, HIGH);
//gpio_put(6, 1);
//gpio_set_mask(1ul << 6);
//sio_hw->gpio_set = 1ul << 6;
//__asm__ __volatile__("nop");

//digitalWrite(6, LOW);
//gpio_put(6, 0);
//gpio_clr_mask(1ul << 6);
//sio_hw->gpio_clr = 1ul << 6;
//__asm__ __volatile__("nop");
  
class RGB
{
 public:
     RGB(int p, int num);
     void d0(void);
     void d1(void);
     void reset(void);
     void setBrightness(uint8_t br);
     void setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b);
     void show(void);
     void clear(void);
 private:
     int pin_;
     int num_;
     uint8_t brightness = 255;
     char color[100][3];
};
#endif
