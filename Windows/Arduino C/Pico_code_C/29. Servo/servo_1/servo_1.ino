/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 29.1
   servo_1
   http://www.keyestudio.com
*/
int servoPin = 0;//Pins of the servo

void setup() {
  pinMode(servoPin, OUTPUT);//set pins of the servo to OUTPUT
}
void loop() {
  servopulse(servoPin, 0);//rotate to 0°
  delay(1000);//delay in 1s
  servopulse(servoPin, 90);//rotate to 90°
  delay(1000);
  servopulse(servoPin, 180);//rotate to 180°
  delay(1000);
}

void servopulse(int pin, int myangle) { //Impulse function
  int pulsewidth = map(myangle, 0, 180, 500, 2500); //map angles to pulse width
  for (int i = 0; i < 10; i++) { //output several pulse
    digitalWrite(pin, HIGH);//pull up the pin of the servo
    delayMicroseconds(pulsewidth);//extend the delayed time of pulse width
    digitalWrite(pin, LOW);//pull down the pin of the servo
    delay(20 - pulsewidth / 1000);
  }
}
