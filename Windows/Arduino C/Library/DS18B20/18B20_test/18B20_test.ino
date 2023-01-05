/*
   18B20子程序,适用于arduino, esp32, raspberry pi pico
   2022/1/6
   Dengfei
   示例代码只转换为摄氏度
*/
#include <DS18B20.h>

//ds18b20 pin to 3
DS18B20 ds18b20(3);

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  double temp = ds18b20.GetTemp();
  temp *= 0.0625;//转换精度为0.0625/LSB
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("C");
  delay(1000);
}
