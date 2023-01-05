/* 
 * Keyestudio 37 in 1 Starter Kit for Raspberry Pi Pico
 * lesson 37
 * mfrc522
 * http://www.keyestudio.com
*/
#include <Wire.h>
#include "MFRC522_I2C.h"
//iic is defaulted as 4 and 5 of pico
// 0x28 is the i2c address of SDA. If it is not matched, check your address with i2cscanner
MFRC522 mfrc522(0x28);   // create the MFRC522 example
String rfid_str = "";
void setup() {
  Serial.begin(115200);           //Set baud rate to 115200
  Wire.begin();                   // initialize I2C
  mfrc522.PCD_Init();             //initialize MFRC522
}

void loop() {
  if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
    delay(50);
    return;
  }
  rfid_str = "";//character strings clear up
  Serial.print(F("Card UID:"));
  for (byte i = 0; i < mfrc522.uid.size; i++) {//save UID
    rfid_str = rfid_str + String(mfrc522.uid.uidByte[i], HEX);  //transform to character strings
    //        Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    //        Serial.print(mfrc522.uid.uidByte[i], HEX);
  }
  Serial.println(rfid_str);

}
