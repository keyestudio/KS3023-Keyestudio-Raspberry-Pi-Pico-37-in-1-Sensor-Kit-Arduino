/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 23
 * Flame sensor
 * http://www.keyestudio.com
*/
//set pins of the sensor to 22 and 26
int digitalPin =  22;
int analogPin = 26;
//save below variables to the digital signal and analog signal
int analogVal = 0;
int digitalVal = 0;

void setup() {
  Serial.begin(9600); //set baud rate to 9600
  pinMode(digitalPin, INPUT); //set the pin 22 to INPUT
}

void loop() {
  analogVal = analogRead(analogPin);  //read analog signals
  digitalVal = digitalRead(digitalPin);  //read digital signals
  Serial.print(analogVal);  //print analog values
  Serial.print("    "); //
  Serial.println(digitalVal); //print digital values
  delay(100); //delay in 100ms

}
