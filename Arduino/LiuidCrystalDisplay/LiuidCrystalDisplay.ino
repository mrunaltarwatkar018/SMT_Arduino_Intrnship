// Liquid Crystal Display

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 7, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  
  lcd.begin(16, 2);
  // Print a message to the LCD.
  // lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.cursor();

  lcd.setCursor(0, 0);
  lcd.print("SM Technologies");
  lcd.setCursor(0, 1);
  lcd.print("Pvt. Ltd.");
  delay(500);
  lcd.clear();


  lcd.setCursor(0, 0);
  lcd.print("Guided By - ");
  lcd.setCursor(0, 1);
  lcd.print("Shashikant Sir");
  delay(500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Branch - ETC ");
  lcd.setCursor(0, 1);
  lcd.print("Batch A");
  delay(500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Shubham Kukreti");
  delay(500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Utkarsha Singhal");
  delay(500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Mrunal Tarwatkar");
  delay(500);
  lcd.clear();

  lcd.cursor();
  lcd.setCursor(0, 0);
  lcd.print("Shriyansh Thote");
  delay(500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Janvi Kuthe");
  delay(500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Deepak Shahu");
  delay(500);
  lcd.clear();


  lcd.cursor();
  lcd.setCursor(0, 0);
  lcd.print("SwapnilPalsapure");
  delay(500);
  lcd.clear();

  // print the number of seconds since reset:
  // lcd.print(millis() / 500);
}

