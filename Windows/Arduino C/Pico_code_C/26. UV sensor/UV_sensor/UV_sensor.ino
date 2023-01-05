/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 26
 * UV sensor
 * http://www.keyestudio.com
*/
int val = 0;
int led = 27;
void setup() {
  Serial.begin(9600);//set baud rate to 9600
  pinMode(led, OUTPUT);//set the pin of the purple LED to INPUT
  pinMode(26, INPUT);//set the pin of the sensor to INPUT
  digitalWrite(led, HIGH);
}

void loop() {
  val = analogRead(26);//read levels
  Serial.println(val);//print analog levels
  delay(100);

}
