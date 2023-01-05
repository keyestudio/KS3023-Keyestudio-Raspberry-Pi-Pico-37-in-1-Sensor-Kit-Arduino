/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 38
 * Breath
 * http://www.keyestudio.com
*/
int LED = 15; //the pin of LED is connected to GP15

void setup() {
  pinMode(LED, OUTPUT);  //set the pin of LED to OUTPUT
}

void loop() {
  for (int i = 0; i <= 255; i++) {  //from 0 to 255，increase 1 for each time
    analogWrite(LED, i);
    delay(10);//delay in 10ms
  }
  for (int i = 255; i >= 0; i--) {  //from 255 to 0，reduce 1 for each time
    analogWrite(LED, i);
    delay(10);//delay in 10ms
  }
}
