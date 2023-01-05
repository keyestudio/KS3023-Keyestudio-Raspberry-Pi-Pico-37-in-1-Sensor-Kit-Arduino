/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 30
   Ultrasonic
   http://www.keyestudio.com
*/
int distance = 0; //Define a variable to receive the distance
int EchoPin = 13; //Echo is connected to GP13
int TrigPin = 14; //Trig is connected to GP14
float checkdistance() { //obtain the distance
  // give a short low level so as to ensure a clear high pulse:
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  // trigger 10ms or above high pulse to the sensor
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  //read a signal from the sensor; a high level pulse，
  //the duration time is calculated from sending ping command to receiving the echo of the object
  float distance = pulseIn(EchoPin, HIGH) / 58.00;  //calculate distance
  delay(10);
  return distance;
}

void setup() {
  Serial.begin(9600);//Set baud rate to 9600
  pinMode(TrigPin, OUTPUT);//set Trig to OUTPUT
  pinMode(EchoPin, INPUT);  //set Echo to INPUT
}

void loop() {
  distance = checkdistance();
  if (distance < 2 || distance >= 400) {  //print "-1"
    Serial.println("-1");
    delay(100);
  }
  else {  //print distance
    Serial.print("distance:");
    Serial.print(distance);
    Serial.println("cm");
    delay(100);
  }

}
