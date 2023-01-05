/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 29.2
   servo_2
   http://www.keyestudio.com
*/
#include <Servo.h>  //servo library
Servo myservo;
void setup() {
  myservo.attach(0);//the servo is connected to GP0
}

void loop() {
  for (int pos = 0; pos < 180; pos++) {
    myservo.write(pos); //rotate to pos
    delay(15);  //
  }
  for (int pos = 180; pos > 0; pos--) {
    myservo.write(pos);
    delay(15);
  }
  delay(2000);//wait for 2s
}
