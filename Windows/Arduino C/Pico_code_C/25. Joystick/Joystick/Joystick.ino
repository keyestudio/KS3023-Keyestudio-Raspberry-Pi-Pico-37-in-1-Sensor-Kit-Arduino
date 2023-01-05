/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 25
 * Joystick
 * http://www.keyestudio.com
*/
int X = 0;
int Y = 0;
int Button = 0;

void setup() {
  Serial.begin(9600);
  pinMode(22, INPUT);  //set the pin of the button to GP22
}

void loop() {
  X = analogRead(26); //the pin of the x axis is connected to ADC0
  Y = analogRead(27); //the pin of Y axis is connected to ADC1
  Button = digitalRead(22);  //read the status of the button and print
  Serial.write("X:");
  Serial.print(X);
  Serial.write("     Y:");
  Serial.print(Y);
  Serial.write("     B:");
  Serial.println(Button);
  delay(100);

}
