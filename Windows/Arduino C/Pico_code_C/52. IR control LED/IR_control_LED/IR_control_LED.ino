Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 52
   IR control LED
   http://www.keyestudio.com
*/
#include"ir.h"
IR IRreceive(16);//IR receiver is connected to GP16
int led = 14;//LED is connected to GP14
boolean flag = true;//LED flag bit
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  delay(1000);
}
////////////////////
void loop() {
  Serial.println("IR receive");
  while (1) {
    int key = IRreceive.getKey();
    if (key != -1) {
      Serial.print(key);
      if (key == 64) { //press the OK key
        if (flag == true) {//flag is true
          digitalWrite(led, HIGH);//打开LED
          Serial.println("  led on");
          flag = false;//flag is false
        } else { //flag becomes false
          digitalWrite(led, LOW);//关闭LED
          Serial.println("  led off");
          flag = true;//flag becomes true
        }
      }
    }
  }
}
