// Liquid Crystal Display

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 7, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int i =0, j = 0;
int s = 1, t = 1;

void setup() {
  // set up the LCD's number of columns and rows:
  
  lcd.begin(16, 2);
  lcd.clear();
  // Print a message to the LCD.
  // lcd.print("hello, world!");
}

void loop() {
  // (1) Scrolling From Left to Right
  // use 0 instead of -5 and check out the differance

  for ( j = 16; j >= 0; j-- ) {
    lcd.setCursor( j, i );
    lcd.print("जानवी");
    // delay(300);
    lcd.setCursor(j+1, s);
    lcd.print("Jay Shri Ram");
    delay(300);
    lcd.clear();
    // lcd.setCursor(j, s);
    // lcd.print("Jay Shri Ram");
    // delay(300);
  }


  // for ( j = 16; j >= 0; j-- ) {
  //   lcd.setCursor(j, s);
  //   lcd.print("Jay Shri Ram");
  //   delay(300);
  //   lcd.clear();
    // }

  // for ( t = 16; t >= 0; t-- ) {
  //   lcd.setCursor(t, s);
  //   lcd.print("Jay Shri Ram");
  //   delay(300);
  //   lcd.clear();
  //   }

  // (2) Scrolling From Right to Left

  // for ( t = 16; t >= 5; t-- ) {
  //   lcd.setCursor( t, s );
  //   lcd.print("Mrunal");
  //   delay(300);
  //   lcd.clear();
  // }


  // lcd.setCursor(0, 0);
  // lcd.print("")
  
}

