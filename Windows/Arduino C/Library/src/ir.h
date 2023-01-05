/*********************************************
 * 1. Only for raspberry PI Pico
 * 2. Only suitable for 125M crystal oscillator
 * 3. date：2021-12-3
 * 4. programmer: jieliang mo
 * 5. https://github.com/earlephilhower/arduino-pico/
 * 6. https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json
 *********************************************/
#ifndef IR_H_
#define IR_H_ 
#include <Arduino.h>
  
class IR
{
 public:
     IR(int p);
     boolean IRStart(void);
     int getByte(void);
     int getKey(void);
 private:
     int pin_;
};
#endif
