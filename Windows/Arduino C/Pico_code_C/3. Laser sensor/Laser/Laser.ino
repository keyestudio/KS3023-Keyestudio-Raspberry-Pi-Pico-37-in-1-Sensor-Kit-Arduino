/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 3
 * Laser sensor
 * http://www.keyestudio.com
*/
int laserPin = 2; //define the laser pin as 2
void setup() {
  pinMode(laserPin, OUTPUT);//set Pins to OUTPUT
}

void loop() {
  digitalWrite(laserPin, HIGH); //turn on the laser module
  delay(2000);  //delay in 2s
  digitalWrite(laserPin, LOW); //turn off laser module
  delay(2000);  //delay in 2s

}
