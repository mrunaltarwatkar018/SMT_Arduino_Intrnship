#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>
#if (defined(__AVR__) || defined(ESP8266)) && !defined(__AVR_ATmega2560__)
// For UNO and others without hardware serial, we must use software serial...
// pin #2 is IN from sensor (GREEN wire)
// pin #3 is OUT from arduino  (WHITE wire)
// Set up the serial port to use softwareserial..
SoftwareSerial mySerial(2, 3);

#else
// On Leonardo/M0/etc, others with hardware serial, use hardware serial!
// #0 is green wire, #1 is white
#define mySerial Serial1

#endif
#include <LiquidCrystal.h>

Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);
int fingerprintID = 0;
String IDname;

const int rs = 7, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int led = 5;
int buzzer = 6;

void setup(){
  //Fingerprint sensor module setup

  lcd.begin(16, 2);
  
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
  // set the data rate for the sensor serial port
  finger.begin(57600);
  
  if (finger.verifyPassword()) {
    Serial.println("Found fingerprint sensor!");
  } 
  else {
    Serial.println("Did not find fingerprint sensor :(");
    while (1) { delay(1); }
  }

  //OLED display setup
  Wire.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  //displays main screen
  displayMainScreen();
}

void loop(){


  displayMainScreen();
  fingerprintID = getFingerprintIDez();
  delay(50);
  if(fingerprintID == 1 || fingerprintID == 3 || fingerprintID == 4 || fingerprintID == 5){
        displayUserGreeting(IDname);            
  }  
  else if(fingerprintID == 53){
    
    lcd.setCursor(0, 0);
    lcd.print("    SWAPNIL    " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 53  " );
    Serial.print("SWAPNIL"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);

    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
    
  }  
  else if(fingerprintID == 27){
    
    lcd.setCursor(0, 1);
    
    lcd.print("MRUNAL" );
    Serial.print("MRUNAL");
   lcd.setCursor(0, 1);
    lcd.print("   Roll No. 27  " ); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
    
  }   
  else if(fingerprintID == 18){
     
    lcd.setCursor(0, 1);
    
    lcd.print("JANHVI" );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 18  " );    
    Serial.print("JANHVI"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );      
  }   
  else if(fingerprintID == 60){
     
    lcd.setCursor(0, 1);
    
    lcd.print("UTKARSHA" );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 60  " );
    Serial.print("UTKARSHA"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
    
  } 
  else if(fingerprintID == 49){
     
    lcd.setCursor(0, 1);
    
    lcd.print("SHRIYANSH" );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 49  " );
    Serial.print("SHRIYANSH"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );

    
  }   
  else if(fingerprintID != 53 || 27 || 60 || 49 || 50 || 18){
    
    lcd.setCursor(0, 1);
    
    lcd.print("SHUBHAM" );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 50  " );
    Serial.print("SHUBHAM"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );

    
  }
   
   
     

} 
uint8_t getFingerprintID() {
  uint8_t p = finger.getImage();
  switch (p) {
    case FINGERPRINT_OK:
      Serial.println("Image taken");
      break;
    case FINGERPRINT_NOFINGER:
      Serial.println("No finger detected");
      return p;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("Communication error");
      return p;
    case FINGERPRINT_IMAGEFAIL:
      Serial.println("Imaging error");
      return p;
    default:
      Serial.println("Unknown error");
      return p;
  }

  // OK success!

  p = finger.image2Tz();
  switch (p) {
    case FINGERPRINT_OK:
      Serial.println("Image converted");
      break;
    case FINGERPRINT_IMAGEMESS:
      Serial.println("Image too messy");
      return p;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("Communication error");
      return p;
    case FINGERPRINT_FEATUREFAIL:
      Serial.println("Could not find fingerprint features");
      return p;
    case FINGERPRINT_INVALIDIMAGE:
      Serial.println("Could not find fingerprint features");
      return p;
    default:
      Serial.println("Unknown error");
      return p;
  }

  // OK converted!
  p = finger.fingerSearch();
  
 

  
if (p == FINGERPRINT_OK) {
    Serial.println("Found a print match!");
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
  }

  
  
 
   else if (p == FINGERPRINT_PACKETRECIEVEERR) {
    Serial.println("Communication error");
    return p;
  } else if (p == FINGERPRINT_NOTFOUND) {
    Serial.println("Did not find a match");
    digitalWrite(buzzer, HIGH);
    delay(100);     
    digitalWrite(buzzer, LOW);
    delay(100); 
    digitalWrite(buzzer, HIGH);
    delay(100);     
    digitalWrite(buzzer, LOW);
    delay(100); 
    digitalWrite(buzzer, HIGH);
    delay(100);     
    digitalWrite(buzzer, LOW);
    delay(100); 
    digitalWrite(buzzer, HIGH);
    delay(100);     
    digitalWrite(buzzer, LOW);
    delay(100); 
    digitalWrite(buzzer, HIGH);
    delay(100);     
    digitalWrite(buzzer, LOW);
    delay(100); 
    return p;
  } else {
    Serial.println("Unknown error");
    return p;
  }

  // found a match!
  Serial.print("Found ID #"); Serial.print(finger.fingerID);
  Serial.print(" with confidence of "); Serial.println(finger.confidence);

  return finger.fingerID;
}

// returns -1 if failed, otherwise returns ID #
int getFingerprintIDez() {
  uint8_t p = finger.getImage();
  if (p != FINGERPRINT_OK)  return -1;

  p = finger.image2Tz();
  if (p != FINGERPRINT_OK)  return -1;

  p = finger.fingerFastSearch();
  if (p != FINGERPRINT_OK)  return -1;

  // found a match!
  Serial.print("Found ID #"); Serial.print(finger.fingerID);
  Serial.print(" with confidence of "); Serial.println(finger.confidence);
  return finger.fingerID;

 
}

void displayMainScreen(){
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(7,5);
  display.println("Waiting fingerprint");
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(52,20);
  display.println("...");  
  display.display();
  delay(500);
}

void displayUserGreeting(String Name){
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);
  display.setCursor(0,0);
  display.print("Hello");
  display.setCursor(0,15);
  display.print(Name); 
  display.display();
  delay(500);
  fingerprintID = 0; 
}

//digitalWrite(buzzer, LOW);
