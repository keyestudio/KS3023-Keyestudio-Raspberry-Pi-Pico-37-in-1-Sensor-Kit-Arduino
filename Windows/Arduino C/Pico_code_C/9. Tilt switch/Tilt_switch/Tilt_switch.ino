/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 9
 * Tilt switch
 * http://www.keyestudio.com
*/
int val; //save the output level value of tilt sensor

void setup() {
  Serial.begin(9600);
  pinMode(17, INPUT);  //Connect the tilt sensor pin to GP17, set GP17 to input
}

void loop() {
  val = digitalRead(17); //read level signals of the module
  Serial.println(val);  //
  delay(100); //delay in 100ms

}
