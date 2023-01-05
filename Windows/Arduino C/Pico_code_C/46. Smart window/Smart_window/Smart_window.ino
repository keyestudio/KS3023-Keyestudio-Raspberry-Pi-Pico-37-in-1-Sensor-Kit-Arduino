* Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 46
 * smart window
 * http://www.keyestudio.com
*/
#include <Servo.h>//import the library of the servo
int item = 0;//save the variable of the steam sensor
Servo myservo;//Define an instance of the servo example

void setup(){
  myservo.attach(9);//the servo is connected to pin 0
}

void loop(){
  item = analogRead(26);//the analog port of the steam sensor is connected to GP26
  if (item > 200) {//analog value >200
    myservo.write(0);//close the window
    delay(500);//delay in 500ms
  } else {//no rains
    myservo.write(180);//open the window
    delay(500);//delay in 500ms
  }

}
