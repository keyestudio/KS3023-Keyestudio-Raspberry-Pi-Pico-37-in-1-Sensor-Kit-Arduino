/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 12
 * PIR motion
 * http://www.keyestudio.com
*/
int val = 0;
int pirPin = 19; //set the pin of PIR motion sensor to GP19
void setup() {
  Serial.begin(9600); //Set baud rate to 9600
  pinMode(pirPin, INPUT);  //set the sensor to INPUT
}

void loop() {
  val = digitalRead(pirPin);  //read the value of the sensor
  Serial.print(val);//print val
  if (val == 1) {//if there are people nearby, high levels will output
    Serial.print("        ");
    Serial.println("Some body is in this area!");
    delay(100);
  }
  else {//if not detecting people, low levels will output
    Serial.print("        ");
    Serial.println("No one!");
    delay(100);
  }
}
