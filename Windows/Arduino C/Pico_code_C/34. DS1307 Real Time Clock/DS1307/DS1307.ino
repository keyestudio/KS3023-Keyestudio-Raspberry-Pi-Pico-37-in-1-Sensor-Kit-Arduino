/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 34
   DS1307 Real Time Clock
   http://www.keyestudio.com
*/
#include <Wire.h>
#include "RtcDS1307.h"  //library of the DS1307 clock module

RtcDS1307<TwoWire> Rtc(Wire);//i2c is connected to 14, 15

void setup(){
  Serial.begin(57600);//set baud rate to 57600
  Rtc.Begin();
  Rtc.SetIsRunning(true);

  Rtc.SetDateTime(RtcDateTime(__DATE__, __TIME__));

  
}

void loop(){
  //print year, month, day, hour, minute, second and week
  Serial.print(Rtc.GetDateTime().Year());
  Serial.print("/");
  Serial.print(Rtc.GetDateTime().Month());
  Serial.print("/");
  Serial.print(Rtc.GetDateTime().Day());
  Serial.print("    ");
  Serial.print(Rtc.GetDateTime().Hour());
  Serial.print(":");
  Serial.print(Rtc.GetDateTime().Minute());
  Serial.print(":");
  Serial.print(Rtc.GetDateTime().Second());
  Serial.print("    ");
  Serial.println(Rtc.GetDateTime().DayOfWeek());
  delay(1000);//delay in 1s

}
