/**
 * 名字：18b20.cpp
 * 功能：18b20控制源文件
 * 
 * 作者：Dengfei
 * 时间：2022.1.6
 */

#ifndef _DS18B20_H__
#define _DS18B20_H__

#include "Arduino.h"

class DS18B20
{
  private:
    int DS18B20_Pin;
  
  public:
    DS18B20(int PIN);
    bool Get18B20Ack();
    void Write18B20(unsigned char dat);
    unsigned char Read18B20();
    long GetTemp();
};

#endif
