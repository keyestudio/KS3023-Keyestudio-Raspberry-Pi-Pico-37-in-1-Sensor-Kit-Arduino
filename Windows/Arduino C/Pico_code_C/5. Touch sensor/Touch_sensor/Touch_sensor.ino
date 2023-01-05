/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 5
 * Touch sensor
 * http://www.keyestudio.com
*/
int val = 0;
int button = 3; //Pins of the button sensor
void setup() {
  Serial.begin(9600);//set baud to 9600
  pinMode(button, INPUT);//set to INPUT
}

void loop() {
  val = digitalRead(button);//read values of the button sensor
  Serial.print(val);//print values
  if (val == 1) {//press the button, high levels
    Serial.print("        ");
    Serial.println("Press the button");
    delay(100);
  }
  else {//release the button, low levels
    Serial.print("        ");
    Serial.println("Loosen the button");
    delay(100);
  }
}
