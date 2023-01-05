/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 2
 * Traffic_Light
 * http://www.keyestudio.com
*/
int greenPin = 12;   //the green LED is connected to GP12
int yellowPin = 13; //the yellow LED is connected to GP13
int redPin = 14;   //the red LED is linked with GP14
void setup() {
  //set pins of the LED to OUTPUT
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  digitalWrite(greenPin, HIGH); //light up the green LED
  delay(5000);  //delay in 5s
  digitalWrite(greenPin, LOW); //turn off the green LED
  for (int i = 1; i <= 3; i = i + 1) {  //run three times
    digitalWrite(yellowPin, HIGH); //light up the yellow LED
    delay(500); //delay in 0.5s
    digitalWrite(yellowPin, LOW); //turn off the yellow LED
    delay(500); //delay in 0.5s
  }
  digitalWrite(redPin, HIGH); //light up the LED
  delay(5000);  //delay in 5s
  digitalWrite(redPin, LOW); //turn off the red LED

}
