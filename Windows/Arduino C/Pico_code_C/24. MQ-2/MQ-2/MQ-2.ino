/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 24
 * MQ2
 * http://www.keyestudio.com
*/
//connect two pins of the sensor to 22 and 26
int digitalPin =  22;
int analogPin = 26;
//save two variables to digital signals and analog signals
int analogVal = 0;
int digitalVal = 0;

void setup() {
  Serial.begin(9600); //set baud rate to 9600
  pinMode(digitalPin, INPUT); //set the pin 22 to INPUT
}

void loop() {
  analogVal = analogRead(analogPin);  //read analog signals
  digitalVal = digitalRead(digitalPin);  //read digital signals
  Serial.print(analogVal);
  if (digitalVal == 1) {
    Serial.println("    Normal");
  }
  else {
    Serial.println("    Exceeding");
  }
  delay(100); //delay in 100ms

}
