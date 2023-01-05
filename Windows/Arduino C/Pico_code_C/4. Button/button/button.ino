/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 4
 * button
 * http://www.keyestudio.com
*/
int val = 0;  //used to save values of buttons
int button = 15; //the pin of the button is connected to GP15
void setup() {
  Serial.begin(9600); //start the serial monitor and set baud rate to 9600
  pinMode(button, INPUT); //set the pin of the button to INPUT
}

void loop() {
  val = digitalRead(button);  //read values of buttons and assign to the variable val
  Serial.print(val);  //print on the serial port
  if (val == 0) { //press the button to read low levels and print the relevant information
    Serial.print("        ");
    Serial.println("Press the botton");
    delay(100);
  }

  else {  //print the pertinent information
    Serial.print("        ");
    Serial.println("Loosen the botton");
    delay(100);
  }
