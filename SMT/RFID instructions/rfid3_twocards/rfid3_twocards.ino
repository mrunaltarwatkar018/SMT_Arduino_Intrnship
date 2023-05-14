#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal.h>
#define SS_PIN 10
#define RST_PIN 9
#define LED 2
#define buzzer A0

//#define BUZZER 
byte readCard[4];
String tag_UID1 = "E32ED91E";
String tag_UID2 = "E056AD19";  // Replace this with the UID of your tag!!!
String tagID1 = "";
String tagID2 = "";
MFRC522 mfrc522(SS_PIN, RST_PIN);

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 8; 
// Create a servo object 
Servo Servo1; 

 // Create MFRC522 instance
void setup()
{
  lcd.begin(16, 2);
  Servo1.attach(servoPin);
  
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
//  pinMode(BUZZER, OUTPUT);
    // initialize digital pin LED_BUILTIN as an output.
  //digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  Serial.begin(115200);        // Initialize serial communications with the PC
  SPI.begin(); // SPI bus
  mfrc522.PCD_Init(); // Initialise MFRC522
}
void loop()
{
  //Wait until new tag is available
  while (readID())
  {
    if (tagID1 == tag_UID1)
    {
      digitalWrite(LED, HIGH); 
      lcd.setCursor(0, 0);
      lcd.print("THIS IS SIDDHI " ); 
      //digitalWrite(BUZZER,LOW);

    }

     if (tagID2 == tag_UID2)
    {
      digitalWrite(LED, LOW); 

digitalWrite(buzzer, HIGH);
delay(200);
digitalWrite(buzzer, LOW);

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("THIS IS SIDDHI222 " );
      Servo1.write(0); 
   delay(200); 
   Servo1.write(180); 
   delay(200); 

     // digitalWrite(BUZZER,LOW);

    }
      else 
      {
        //digitalWrite(BUZZER,HIGH);
      }
    
    }
   
  }

  //Read new tag if available
  boolean readID()
  {
    //Check if a new tag is detected or not. If not return.
    if ( ! mfrc522.PICC_IsNewCardPresent())
    {
      return false;
    }
    //Check if a new tag is readable or not. If not return.
    if ( ! mfrc522.PICC_ReadCardSerial())
    {
      return false;
    }
    tagID1 = "";
    tagID2 = "";    
    // Read the 4 byte UID
    for ( uint8_t i = 0; i < 4; i++)
    {
      //readCard[i] = mfrc522.uid.uidByte[i];
      tagID1.concat(String(mfrc522.uid.uidByte[i], HEX));
      tagID2.concat(String(mfrc522.uid.uidByte[i], HEX)); // Convert the UID to a single String
    }
    tagID1.toUpperCase();
    tagID2.toUpperCase();
    mfrc522.PICC_HaltA(); // Stop reading
    return true;
  }