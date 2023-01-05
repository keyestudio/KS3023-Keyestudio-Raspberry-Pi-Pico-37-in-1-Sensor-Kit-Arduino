/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 16.1
 * rgb_1
 * http://www.keyestudio.com
*/
int redPin = 9; //the red LED is connected to GP9
int greenPin = 10; //the green LED is connected to GP10
int bluePin = 11; //the blue LED is connected to GP11
void setup(){
  //set ports to OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop(){
  //red color
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(1000);
  //green color
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  delay(1000);
  //blue color
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
  delay(1000);

}
