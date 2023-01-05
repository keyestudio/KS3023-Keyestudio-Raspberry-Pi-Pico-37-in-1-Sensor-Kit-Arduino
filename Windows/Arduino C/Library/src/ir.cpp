/*********************************************
 * 1. Only for raspberry PI Pico
 * 2. Only suitable for 125M crystal oscillator
 * 3. date：2021-12-3
 * 4. programmer: jieliang mo
 * 5. https://github.com/earlephilhower/arduino-pico/
 * 6. https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json
 *********************************************/

#include"ir.h"

/////////////////////////////////////////////////////////
IR::IR(int p){
  pin_ = p;
  pinMode(pin_, INPUT);
}
/////////////////////////////////////////////////////////
boolean IR::IRStart(void){
  int t = 0;
  //读取脉冲高电平和低电平，9ms低电平+4.5ms高电平
  if(digitalRead(pin_)==LOW){
    while(digitalRead(pin_)==LOW && t<190){   //标准为9000us
      delayMicroseconds(50);
      t++;
    }
  }
  if(t > 170 && t < 190){   //判断脉冲是否为代表1, 标准为180
    //Serial.println(t);
    return true;  
  }    
  else
    return false;	
}
/////////////////////////////////////////////////////////
int IR::getByte(void){  //接收32位红外数据（地址、地址反码、数据、数据反码）
    int Byte = 0; 
    for(char i=0; i<8; i++){
        int t = 0;
        //读取脉冲高电平和低电平时间
        while(digitalRead(pin_)==LOW);
        if(digitalRead(pin_)==HIGH){
          while(digitalRead(pin_)==HIGH && t<38){   //标准1688us
            delayMicroseconds(50);
            t++;
          }
        //Serial.println(t);
        }
        if(t > 20 && t < 38)   //判断脉冲是否为代表1, 标准为11--34
            Byte |= 1 << i;
    }
    return Byte;	
}
/////////////////////////////////////////////////////////
int IR::getKey(void){
    int key[4] = {0, 0, 0, 0};
    if(IRStart() == false){     //判断红外引导脉冲
        //delay(108);             //One message frame lasts 108 ms.
        return -1;
    }
    else{
        while(digitalRead(pin_)==HIGH);                     //等待起始信号4.5ms
        for(char i=0; i<4; i++)
                key[i] = getByte();                                //接收32位红外数据（地址、地址反码、数据、数据反码）
        if(key[0] + key[1] == 0xff && key[2] + key[3] == 0xff)     //校验接收数据是否正确
            return key[2];
        else
            return -1;
    }	
}


