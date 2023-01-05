/*
   Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
   lesson 44
   Encoder control RGB
   http://www.keyestudio.com
*/
//Interfacing Rotary Encoder with Arduino
//Encoder Switch -> pin 20
//Encoder DT -> pin 19
//Encoder CLK -> pin 18
int Encoder_DT  = 19;
int Encoder_CLK  = 18;
int Encoder_Switch = 20;

int Previous_Output;
int Encoder_Count;
int redPin = 9; //the red LED is connected to D9
int greenPin = 10; //the green LED is connected to D10
int bluePin = 11; //the blue LED is connected to D11
int val;
void setup() {
  Serial.begin(9600);

  //pin Mode declaration
  pinMode (Encoder_DT, INPUT);
  pinMode (Encoder_CLK, INPUT);
  pinMode (Encoder_Switch, INPUT);

  Previous_Output = digitalRead(Encoder_DT); //Read the inital value of Output A
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  //aVal = digitalRead(pinA);

  if (digitalRead(Encoder_DT) != Previous_Output)
  {
    if (digitalRead(Encoder_CLK) != Previous_Output)
    {
      Encoder_Count ++;
      Serial.print(Encoder_Count);
      Serial.print("  ");
      val = Encoder_Count % 3;
      Serial.println(val);
    }
    else
    {
      Encoder_Count--;
      Serial.print(Encoder_Count);
      Serial.print("  ");
      val = Encoder_Count % 3;
      Serial.println(val);
    }
  }

  Previous_Output = digitalRead(Encoder_DT);

  if (digitalRead(Encoder_Switch) == 0)
  {
    delay(5);
    if (digitalRead(Encoder_Switch) == 0) {
      Serial.println("Switch pressed");
      while (digitalRead(Encoder_Switch) == 0);
    }
  }
  if (val == 0) {
    //red(255, 0, 0)
    analogWrite(9, 255);
    analogWrite(10, 0);
    analogWrite(11, 0);
  } else if (val == 1) {
    //orange(255, 0, 0)
    analogWrite(9, 0);
    analogWrite(10, 255);
    analogWrite(11, 0);
  } else {
    //blue(255, 0, 0)
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 255);
  }
}
