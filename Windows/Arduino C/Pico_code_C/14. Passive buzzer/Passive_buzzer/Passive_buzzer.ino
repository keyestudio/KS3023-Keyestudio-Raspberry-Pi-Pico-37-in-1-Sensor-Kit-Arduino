/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 14
 * Passive buzzer
 * http://www.keyestudio.com
*/
int beeppin = 21; //set the pin of the power amplifier to GP21
void setup() {
  pinMode(beeppin, OUTPUT);//set the digital port of the power amplifier to OUTPUT
}

void loop() {
  tone(beeppin, 262);//emit DO for 1000mss
  delay(1000);
  tone(beeppin, 294);//emit Re for 750ms
  delay(750);
  tone(beeppin, 330);//emit Mi for 625ms
  delay(625);
  tone(beeppin, 349);//emit Fa for 500ms
  delay(500);
  tone(beeppin, 392);//emit So for 375ms
  delay(375);
  tone(beeppin, 440);//emit La for 250ms
  delay(250);
  tone(beeppin, 494);//emit Si for 125ms
  delay(125);
  noTone(beeppin);//stop playing for 100ms
  delay(1000);
}
