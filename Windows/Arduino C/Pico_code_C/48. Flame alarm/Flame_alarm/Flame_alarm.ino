/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 48
 * flame alarm
 * http://www.keyestudio.com
*/
int item = 0;
void setup() {
  Serial.begin(9600);
  pinMode(22, INPUT);//the pin of the flame sensor is connected to 22
  pinMode(3, OUTPUT);//the pin of the buzzer is connected to 3
}

void loop() {
  item = digitalRead(22);//read digital levels output by the flame sensor
  Serial.println(item);//print level signals
  if (item == 0) {//detect fire
    digitalWrite(3, HIGH);//open buzzer
  } else {//otherwise, turn off the buzzer
    digitalWrite(3, LOW);
  }
  delay(100);//delay in 100ms

}
