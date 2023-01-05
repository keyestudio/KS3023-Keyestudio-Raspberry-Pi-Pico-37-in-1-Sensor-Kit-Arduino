/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 7
 * line tracking
 * http://www.keyestudio.com
*/
int val = 0;
void setup() {
  Serial.begin(9600);//set baud rate to 9600
  pinMode(3, INPUT);//set pins of the sensor to INPUT
}

void loop() {
  val = digitalRead(3);//read digital levels of the sensor
  Serial.print(val);//serial port prints
  if (val == 0) {//detect white val(0)
    Serial.print("        ");
    Serial.println("White");
    delay(100);
  }
  else {//detect black val (1)
    Serial.print("        ");
    Serial.println("Black");
    delay(100);
  }
}
