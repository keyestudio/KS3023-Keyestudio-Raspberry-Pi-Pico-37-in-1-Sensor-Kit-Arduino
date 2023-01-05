/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 16.2
 * rgb_2
 * http://www.keyestudio.com
*/
int redPin = 9; //the red LED is connected to GP9
int greenPin = 10; //the green LED is connected to GP10
int bluePin = 11; //the blue LED is connected to GP11
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
  //red(255, 0, 0)
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000);
  //orange(255, 97, 0)
  analogWrite(9, 255);
  analogWrite(10, 97);
  analogWrite(11, 0);
  delay(1000);
  //yellow(255, 255, 0)
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 0);
  delay(1000);
  //green(0, 255, 0)
  analogWrite(9, 0);
  analogWrite(10, 255);
  analogWrite(11, 0);
  delay(1000);
  //blue(0, 0, 255)
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
  delay(1000);
  //cyan-blue(0, 255, 255)
  analogWrite(9, 0);
  analogWrite(10, 255);
  analogWrite(11, 255);
  delay(1000);
  //purple(160, 32, 240)
  analogWrite(9, 160);
  analogWrite(10, 32);
  analogWrite(11, 240);
  delay(1000);

}
