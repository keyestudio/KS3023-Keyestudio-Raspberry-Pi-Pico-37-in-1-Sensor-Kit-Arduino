/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 41
 * UV alarm
 * http://www.keyestudio.com
*/
int item = 0;
void setup() {
  pinMode(3, OUTPUT); // the buzzer is connected to the digital port 3 and set to OUTPUT
}

void loop() {
  item = analogRead(26);//read analog values of ultraviolet sensor
  if (item >= 20) {//stronger than 20
    digitalWrite(3, HIGH);//buzzer turns on
  } else {//otherwise
    digitalWrite(3, LOW);//buzzer turns off
  }
  delay(100);//delay in 100ms

}
