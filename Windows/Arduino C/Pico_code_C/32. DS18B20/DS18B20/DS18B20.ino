* Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 32
 * ds18b20
 * http://www.keyestudio.com
*/
#include <DS18B20.h>

//ds18b20 pin to 3
DS18B20 ds18b20(3);

void setup() {
  Serial.begin(9600);
}

void loop() {
  double temp = ds18b20.GetTemp();//read temperature value
  temp *= 0.0625;//convert to 0.0625/LSB
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("C");
  delay(1000);
}
