#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);

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
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("    SWAPNIL    " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 53  " );
    delay(500); 
    Serial.print("SWAPNIL"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);

    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
    delay(1000);
    
    
  }  
  else if(fingerprintID == 27){
    lcd.clear();
    lcd.setCursor(0, 0);
    
    lcd.print("     MRUNAL     " );
    Serial.print("MRUNAL");
   lcd.setCursor(0, 1);
    lcd.print("   Roll No. 27  " ); 
    delay(500); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
    delay(1000);
    
  }   
  else if(fingerprintID == 18){
     lcd.clear();
    lcd.setCursor(0, 0);
    
    lcd.print("     JANHVI     " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 18  " );  
    delay(500);   
    Serial.print("JANHVI"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );    
    delay(1000);  
  }   
  else if(fingerprintID == 60){
     lcd.clear();
    lcd.setCursor(0, 0);
    
    lcd.print("    UTKARSHA   " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 60  " );
    delay(500); 
    Serial.print("UTKARSHA"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
    delay(1000);
  } 
  else if(fingerprintID == 49){
     lcd.clear();
    lcd.setCursor(0, 0);
    
    lcd.print("   SHRIYANSH   " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 49  " );
    delay(500); 
    Serial.print("SHRIYANSH"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
    delay(1000);
    
  }   
  else if(fingerprintID == 50){
    lcd.clear();
    lcd.setCursor(0, 0);
    
    lcd.print("    SHUBHAM    " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 50  " );
    delay(500); 
    Serial.print("SHUBHAM"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
delay(1000);
    
  }

  else if(fingerprintID == 21){
    lcd.clear();
    lcd.setCursor(0, 0);
    
    lcd.print("    Khushi    " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 21  " );
    delay(500); 
    Serial.print("SHUBHAM"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
delay(1000);
  }


  else if(fingerprintID == 46){
    lcd.clear();
    lcd.setCursor(0, 0);
    
    lcd.print("    Shardul    " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 46  " );
    delay(500); 
    Serial.print("SHUBHAM"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
delay(1000);
  }



  else if(fingerprintID == 51){
    lcd.clear();
    lcd.setCursor(0, 0);
    
    lcd.print("    Siddhi    " );
    lcd.setCursor(0, 1);
    lcd.print("   Roll No. 51  " );
    delay(500); 
    Serial.print("SHUBHAM"); 
    displayUserGreeting(IDname);   
    digitalWrite(buzzer, HIGH);
    delay(500);     
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0, 0);
    lcd.print("   Attendance   " );
    lcd.setCursor(0, 1);
    lcd.print("   Registered   " );
delay(1000);
  }

  









  
  else {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("     Enroll     " );
    lcd.setCursor(0, 1);
    lcd.print("  Fingerprint   ");
    
    displayUserGreeting(IDname);   
 
  }    

  
   
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
  Serial.print("Found ID #"); 
  Serial.print(finger.fingerID); 
  Serial.print(" with confidence of "); 
  Serial.println(finger.confidence);
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
