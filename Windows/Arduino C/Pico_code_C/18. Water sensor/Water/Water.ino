/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 18
 * Steam sensor
 * http://www.keyestudio.com
*/
int val = 0;
int Water = 26; //the pin of the steam sensor is 26
void setup() {
  Serial.begin(9600);//set baud rate to 9600
}

void loop() {
  val = analogRead(Water);  //read the value of the sensor
  Serial.print("Water:");
  Serial.println(val);
  delay(100);

}
