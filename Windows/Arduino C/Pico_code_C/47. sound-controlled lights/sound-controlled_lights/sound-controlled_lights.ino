/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 47
   sound-controlled lights
   http://www.keyestudio.com
*/
int ledPin = 15;//LED is connected to GP15
int microPin = 26;//the sound sensor is connected to ADC0 (GP26)
void setup() {
  Serial.begin(9600);//Set baud rate to 9600
  pinMode(ledPin, OUTPUT);//LED is set to OUTPUT
}

void loop() {
  int val = analogRead(microPin);//read analog values
  Serial.print(val);//serial prints
  if(val > 200){//more than threshold 200
    digitalWrite(ledPin, HIGH);//light up LED3s and print the pertinent information
    Serial.println("  led on");
    delay(3000);
  }else{//otherwise
    digitalWrite(ledPin, LOW);//turn off LED and print the pertinent information
    Serial.println("  led off");
  }
  delay(100);
}
