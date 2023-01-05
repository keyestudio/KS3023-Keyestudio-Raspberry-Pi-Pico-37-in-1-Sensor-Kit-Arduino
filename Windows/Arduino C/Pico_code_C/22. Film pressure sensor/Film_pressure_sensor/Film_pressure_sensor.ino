/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 22
 * Film pressure sensor
 * http://www.keyestudio.com
*/
int val = 0;
int Film = 27; //the thin-film pressure sensor is connected ADC1
void setup() {
  Serial.begin(9600);//Set baud rate to 9600
}
void loop() {
  val = analogRead(Film);//read the analog value
  Serial.println(val);//print the analog value
  delay(100);//delay in 1000ms

}
