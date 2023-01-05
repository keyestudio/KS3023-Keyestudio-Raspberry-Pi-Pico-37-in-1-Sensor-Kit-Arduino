/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 6
 * obstacle avoidance sensor
 * http://www.keyestudio.com
*/
int val = 0;
void setup() {
  Serial.begin(9600);//set baud rate to 9600
  pinMode(16, INPUT);//set GP16 to INPUT
}

void loop() {
  val = digitalRead(16);//read digital levels
  Serial.print(val);//print the read level signals
  if (val == 0) {//check the obstacle
    Serial.print("        ");
    Serial.println("There are obstacles");
    delay(100);
  }
  else {//the obstacle is not detected
    Serial.print("        ");
    Serial.println("All going well");
    delay(100);
  }
}
