/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 40
 * Avoiding alarm
 * http://www.keyestudio.com
*/
int item = 0;
void setup() {
  pinMode(15, INPUT);  //the obstacle avoidance sensor is interfaced with GP15 and set to INPUT
  pinMode(16, OUTPUT); //the obstacle avoidance sensor is interfaced with GP16and set to OUTPUT
}

void loop() {
  item = digitalRead(15);//read the level values of the obstacle avoidance sensor
  if (item == 0) {//the obstacle is detected
    digitalWrite(16, HIGH);//the buzzer beeps
  } else {//the obstacle is not detected
    digitalWrite(16, LOW);//the buzzer doesn’t beep
  }
  delay(100);//delay in 1000ms

}
