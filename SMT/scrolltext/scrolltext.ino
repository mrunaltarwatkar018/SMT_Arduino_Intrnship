// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 7, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int  i = 0 , j = 0;



void setup() {
 
  lcd.begin(16, 2);
  
	
	lcd.clear();
 
}

void loop() {

  //(1) Scrolling from Left to Right
// Use 0 instead of -5 and check out the difference
  for (j =16 ; j >= 0 ; j--) {
   lcd.setCursor(j, i);
   lcd.print("Welcome to SMT");
   delay(300);
   lcd.clear( );
  }

  {
    //(2)Scrolling from Right to Left
 for (j = 16 ; j >= 5 ; j--) {
   
  lcd.setCursor(j, i);
  lcd.print(" Students ");
  delay(300);
  lcd.clear( );
 }
  }
  
}


