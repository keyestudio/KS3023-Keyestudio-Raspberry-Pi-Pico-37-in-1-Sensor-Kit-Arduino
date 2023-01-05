/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 39
 * button control LED
 * http://www.keyestudio.com
*/
int button = 16;//the digital pin of the button is 16
int led = 15;//the pin of LED is connected to GP15
bool led_flag;
void setup() {
  pinMode(button, INPUT);  //set the pin of the button to INPUT
  pinMode(led, OUTPUT);  //set the pin of the LED to OUTPUT
  attachInterrupt(digitalPinToInterrupt(button), toggle_handle, FALLING);  //external interrupt is 0, trailing edge triggers
}

void loop() {
  digitalWrite(led, led_flag);//press the button to light up LED or turn off LED
  delay(100);
}

void toggle_handle(){//switch the state of LED
  led_flag = !led_flag;
}
