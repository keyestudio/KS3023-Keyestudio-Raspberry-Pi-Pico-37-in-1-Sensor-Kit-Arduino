/**
 * 名字：18b20.cpp
 * 功能：18b20控制源文件
 * 
 * 作者：Dengfei
 * 时间：2022.1.6
 */

#include "DS18B20.h"
#include "Arduino.h"

DS18B20::DS18B20(int PIN)
{
  DS18B20_Pin = PIN;
}

bool DS18B20::Get18B20Ack() {
  bool ack;
  pinMode(DS18B20_Pin, OUTPUT);//设置为输出模式
  digitalWrite(DS18B20_Pin, HIGH);//拉高电平释放引脚
  delayMicroseconds(5);
  digitalWrite(DS18B20_Pin, LOW);//产生600us复位脉冲
  delayMicroseconds(600);//480-960
  digitalWrite(DS18B20_Pin, HIGH);//拉高电平释放引脚
  delayMicroseconds(60);
  pinMode(DS18B20_Pin, INPUT);//设置为输入模式,用来读取电平状态
  ack = digitalRead(DS18B20_Pin);//读取存在脉冲
  while (!digitalRead(DS18B20_Pin)); //等待存在脉冲结束
  return ack;
}

void DS18B20::Write18B20(unsigned char dat) {
  unsigned char mask;
  pinMode(DS18B20_Pin, OUTPUT);
  for (mask = 0x01; mask != 0; mask <<= 1) {//低位在先，依次移出 8 个 bit
    digitalWrite(DS18B20_Pin, LOW); //产生 10us 低电平脉冲
    delayMicroseconds(10);
    if (dat & mask) digitalWrite(DS18B20_Pin, HIGH);//输出该 bit 值
    else digitalWrite(DS18B20_Pin, LOW);
    delayMicroseconds(50);  //延时 50us
    digitalWrite(DS18B20_Pin, HIGH); //拉高通信引脚
  }
}

unsigned char DS18B20::Read18B20() {
  pinMode(DS18B20_Pin, OUTPUT);
  digitalWrite(DS18B20_Pin, HIGH);
  delayMicroseconds(2);
  unsigned char dat = 0;
  unsigned char mask;
  for (mask = 0x01; mask != 0; mask <<= 1) { //低位在先，依次采集 8 个 bit
    digitalWrite(DS18B20_Pin, LOW);//产生 至少1us 低电平脉冲
    delayMicroseconds(1);
    digitalWrite(DS18B20_Pin, HIGH);//结束低电平脉冲，等待 18B20 输出数据
    pinMode(DS18B20_Pin, INPUT);  //设置输入模式
    delayMicroseconds(5); //延时 5us
    if (!digitalRead(DS18B20_Pin)) { //读取通信引脚上的值
      dat &= ~mask;
    } else {
      dat |= mask;
    }
    delayMicroseconds(55); //再延时 55us
    pinMode(DS18B20_Pin, OUTPUT);  //设置输出模式
    digitalWrite(DS18B20_Pin, HIGH);  //释放通信引脚
  }
  return dat;
}

long DS18B20::GetTemp() {
  unsigned char LSB, MSB;
  long temp;
  if (Get18B20Ack())  return 0;
  Write18B20(0xCC);//发跳过ROM命令
  Write18B20(0x44);//发读开始转换命令
  if (Get18B20Ack())  return 0;
  Write18B20(0xCC);//发跳过ROM命令
  Write18B20(0xBE);//读寄存器，共九字节，前两字节为转换值
  LSB = Read18B20();//低字节
  MSB = Read18B20();//高字节
  temp = ((long)MSB << 8) + LSB;
  return temp;
}