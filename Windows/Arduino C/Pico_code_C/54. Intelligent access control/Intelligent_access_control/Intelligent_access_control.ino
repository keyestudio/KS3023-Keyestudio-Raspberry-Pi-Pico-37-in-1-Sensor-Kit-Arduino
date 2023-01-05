/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 54
 * Intelligent access control
 * http://www.keyestudio.com
*/
#include <Servo.h>
#include <Wire.h>
#include <MFRC522_I2C.h>
MFRC522 mfrc522(0x28);
Servo myservo;
String rfid_str = "";

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mfrc522.PCD_Init();
  myservo.attach(10);//the digital port is 10
  myservo.write(0);//initialize 0°
  delay(500);
}

void loop() {
  if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
    delay(50);
    return;
  }
  rfid_str = "";//character strings clear up
  Serial.print(F("Card UID:"));
  for (byte i = 0; i < mfrc522.uid.size; i++) {// save UID
    rfid_str = rfid_str + String(mfrc522.uid.uidByte[i], HEX);  //convert to character strings
    //        Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    //        Serial.print(mfrc522.uid.uidByte[i], HEX);
  }
  Serial.println(rfid_str);
  if (rfid_str == "8dfe6c4d" || rfid_str == "bc33766e") {
    myservo.write(180);
    delay(500);
    Serial.println("  open the door!");
  }

}
