/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 20
 * Photoresistance
 * http://www.keyestudio.com
*/
int val = 0;
int photoPin = 28;  //analog port ADC2 of photoresistor
void setup() {
  Serial.begin(9600);//set baud rate to 9600
}

void loop() {
  val = analogRead(photoPin);///read the value of the sensor
  Serial.println(val);//print values
  delay(100);//delay in 100MS

}
