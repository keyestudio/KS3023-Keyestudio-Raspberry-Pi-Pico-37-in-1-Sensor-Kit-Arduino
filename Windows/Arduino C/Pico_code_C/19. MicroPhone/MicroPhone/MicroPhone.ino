/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 19
 * MicroPhone
 * http://www.keyestudio.com
*/
int val = 0;
int Microphone = 27;  //microphone is connected to ADC1
void setup() {
  Serial.begin(9600);//Set baud rate to 9600
}

void loop() {
  val = analogRead(Microphone); //read the value of the sensor and assign to the variable val
  Serial.println(val);  //print the analog value
  delay(100); //delay in 100MS

}
