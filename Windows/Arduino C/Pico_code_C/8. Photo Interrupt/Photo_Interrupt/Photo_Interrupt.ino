/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 8
 * Photo_Interrupt
 * http://www.keyestudio.com
*/
int PushCounter = 0; //push counter variable
int State = 0; //output the current state
int lastState = 0; //output state of the sensor saved

void setup() {
  Serial.begin(9600);//set baud rate to 9600
  pinMode(3, INPUT);//set pins of the sensor to INPUT
}

void loop() {
  State = digitalRead(3);//read the current state
  if (State != lastState) {//if the state is different from the previous
    if (State == 1) {//block light
      PushCounter = PushCounter + 1;//counter plus 1
      Serial.println(PushCounter);//print counters
    }
  }
  lastState = State;//update
}
