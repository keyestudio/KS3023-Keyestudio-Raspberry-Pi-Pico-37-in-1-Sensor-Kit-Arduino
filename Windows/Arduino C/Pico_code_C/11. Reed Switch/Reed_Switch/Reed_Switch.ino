/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 11
 * Reed Switch
 * http://www.keyestudio.com
*/
int val = 0;
int reedPin = 18; ///the signal pin of reed switch module is GP18
void setup() {
  Serial.begin(9600);//Set baud rate to 9600
  pinMode(reedPin, INPUT);//set to INPUT
}

void loop() {
  val = digitalRead(reedPin);//read digital levels
  Serial.print(val);//

  if (val == 0) {//magnetic field nearby
    Serial.print("        ");
    Serial.println("A magnetic  field");
    delay(100);
  }
  else {//no magnetic field
    Serial.print("        ");
    Serial.println("There is no magnetic field");
    delay(100);
  }
}
