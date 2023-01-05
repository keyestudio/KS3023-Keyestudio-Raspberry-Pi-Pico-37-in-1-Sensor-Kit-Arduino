/*********************************************
 * 1. Only for raspberry PI Pico
 * 2. Only suitable for 125M crystal oscillator
 * 3. date：2021-12-3
 * 4. programmer: jieliang mo
 * 5. https://github.com/earlephilhower/arduino-pico/
 * 6. https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json
 *********************************************/

#include"rgb.h"

/////////////////////////////////////////////////////////
RGB::RGB(int p, int num){
  if (num > 100)
    return;
    
  pin_ = p;
  num_ = num;
  //pinMode(pin_, OUTPUT);
  gpio_init(pin_);
  gpio_set_dir(pin_, true);
  
  gpio_set_function(pin_, GPIO_FUNC_SIO);
}
/////////////////////////////////////////////////////////
void RGB::d0(void){
  sio_hw->gpio_set = 1ul << pin_;    //1  ---->  250ns
  __asm__ __volatile__("nop");       //8ns
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  
  sio_hw->gpio_clr = 1ul << pin_;    //0  --->  650ns
  __asm__ __volatile__("nop");       //8ns
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");    
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
}
///////////////////////////////////////////////////////////////////////////////////
void RGB::d1(void){
  sio_hw->gpio_set = 1ul << pin_;    //1  --->  650ns
  __asm__ __volatile__("nop");       //8ns
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");    
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");

  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
    
  sio_hw->gpio_clr = 1ul << pin_;    //0  --->  250ns
  __asm__ __volatile__("nop");       //8ns
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  __asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
  //__asm__ __volatile__("nop");
}
///////////////////////////////////////////////////////////////////////////////////
void RGB::reset(void){              // > 280us
  sio_hw->gpio_clr = 1ul << 6;      //0
  for(int t=0; t<6000; t++){
    __asm__ __volatile__("nop");    //8ns
    __asm__ __volatile__("nop");
    __asm__ __volatile__("nop");
  }
}
///////////////////////////////////////////////////////////////////////////////////
void RGB::setBrightness(uint8_t br){ 
  if(br > 255)
    return;

  brightness = br;
}
///////////////////////////////////////////////////////////////////////////////////
void RGB::setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b){ 
  if(n > num_)
    return;

  color[n][0] = map(r,0,255,0,brightness);
  color[n][1] = map(g,0,255,0,brightness);
  color[n][2] = map(b,0,255,0,brightness);
}
///////////////////////////////////////////////////////////////////////////////////
void RGB::show(void){
  for(int num=0; num<num_; num++){
    uint32_t c;
    c = (((uint32_t)color[num][1] << 16) | ((uint32_t)color[num][0] <<  8) | color[num][2]) & 0x00ffffff;

    for(int b=0; b<24; b++){
    if(c & 0x800000)
      d1();
    else
      d0();
    c = c << 1;
    }
  }
}
///////////////////////////////////////////////////////////////////////////////////
void RGB::clear(void){
  int num = num_*24;
  for(int b=0; b<num; b++)
    d0();
}
