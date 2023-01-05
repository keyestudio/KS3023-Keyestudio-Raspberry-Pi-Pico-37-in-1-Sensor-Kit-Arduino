/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 10
 * Hall magnetic
 * http://www.keyestudio.com
*/
int val = 0;
int hallPin = 5;  //the pin of the hall sensor is connected to port 5
void setup() {
  Serial.begin(9600);//set baud rate to 9600
  pinMode(hallPin, INPUT);//set pins to INPUT
}

void loop() {
  val = digitalRead(hallPin);//read level values of the hall sensor
  Serial.print(val);//print val
  if (val == 0) {//South Pole Magnetic Field
    Serial.println("      The magnetic field at the South Pole!");
  }
  else {//or
    Serial.println("      Just be all normal!");
  }
delay(100);
}
