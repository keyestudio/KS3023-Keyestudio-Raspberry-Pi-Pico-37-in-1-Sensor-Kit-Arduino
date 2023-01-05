/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 51
   Ultrasonic radar
   http://www.keyestudio.com
*/
#include "KETM1650.h"//the library file of the 4-digit tube display
KETM1650 tm_4display(15, 14);

int beeppin = 16; //define GP16
int EchoPin = 19; //Echo is connected to GP19
int TrigPin = 20; //Trig is connected to GP20
int distance;//distance detected by the ultrasonic sensor

int redPin = 9; //make the red LED connect to GP9
int greenPin = 10; //make the green LED connect to GP10
int bluePin = 11; //make the blue LED connect to GP11

float checkdistance() { //obtain the distance
  // give a short low level so as to ensure a clear high pulse
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  // trigger 10ms or above high pulse to the sensor
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  // read a signal from the sensor; a high level pulse，
  //the duration time is calculated from sending ping command to receiving the echo of the object.
  float distance = pulseIn(EchoPin, HIGH) / 58.00;  //calculate distance
  delay(10);
  return distance;
}

void setup() {
  tm_4display.init(); //initialize the tube display
  pinMode(TrigPin, OUTPUT);//Trig is OUTPUT
  pinMode(EchoPin, INPUT);  //Echo is INPUT
  pinMode(beeppin, OUTPUT);//set the audio power amplifier to OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  distance = checkdistance(); //ultrasonic ranging
  tm_4display.displayString(distance);  //the tube display shows the distance
  if (distance <= 10) {
    tone(beeppin, 880);
    delay(100);
    noTone(beeppin);
    analogWrite(9, 255);//red(255, 0, 0)
    analogWrite(10, 0);
    analogWrite(11, 0);

  } else if (distance > 10 && distance <= 20) {
    tone(beeppin, 532);
    delay(200);
    noTone(beeppin);
    analogWrite(9, 0);//blue(255, 0, 0)
    analogWrite(10, 0);
    analogWrite(11, 255);
  } else {
    analogWrite(9, 0);//green(255, 0, 0)
    analogWrite(10, 255);
    analogWrite(11, 0);
  }

}
