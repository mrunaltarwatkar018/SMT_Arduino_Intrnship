// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 7, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte Heart[8] = {
0b00000,
0b01010,
0b11111,
0b11111,
0b01110,
0b00100,
0b00000,
0b00000
};

byte Bell[8] = {
0b00100,
0b01110,
0b01110,
0b01110,
0b11111,
0b00000,
0b00100,
0b00000
};


byte Alien[8] = {
0b11111,
0b10101,
0b11111,
0b11111,
0b01110,
0b01010,
0b11011,
0b00000
};

byte Check[8] = {
0b00000,
0b00001,
0b00011,
0b10110,
0b11100,
0b01000,
0b00000,
0b00000
};

byte Speaker[8] = {
0b00001,
0b00011,
0b01111,
0b01111,
0b01111,
0b00011,
0b00001,
0b00000
};


byte Sound[8] = {
0b00001,
0b00011,
0b00101,
0b01001,
0b01001,
0b01011,
0b11011,
0b11000
};


byte Skull[8] = {
0b00000,
0b01110,
0b10101,
0b11011,
0b01110,
0b01110,
0b00000,
0b00000
};

byte Lock[8] = {
0b01110,
0b10001,
0b10001,
0b11111,
0b11011,
0b11011,
0b11111,
0b00000
};


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.createChar(0, Heart);
	// create a new character
	lcd.createChar(1, Bell);
	// create a new character
	lcd.createChar(2, Alien);
	// create a new character
	lcd.createChar(3, Check);
	// create a new character
	lcd.createChar(4, Speaker);
	// create a new character
	lcd.createChar(5, Sound);
	// create a new character
	lcd.createChar(6, Skull);
	// create a new character
	lcd.createChar(7, Lock);

	// Clears the LCD screen
	lcd.clear();
  // Print a message to the LCD.
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
	lcd.setCursor(0, 1);
	lcd.write(byte(0));

	lcd.setCursor(2, 1);
	lcd.write(byte(1));

	lcd.setCursor(4, 1);
	lcd.write(byte(2));

	lcd.setCursor(6, 1);
	lcd.write(byte(3));

	lcd.setCursor(8, 1);
	lcd.write(byte(4));

	//lcd.setCursor(10, 1);
	//lcd.write(byte(5));

	//lcd.setCursor(12, 1);
	//lcd.write(byte(6));

	lcd.setCursor(14, 1);
	lcd.write(byte(7));
  //lcd.clear(); 
  //lcd.setCursor(0, 0);
  //lcd.print("Hii " );
 // delay(2000);
 // lcd.clear();

 
  // lcd.setCursor(0, 1);
  //lcd.print(" hiiiiiii");
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
}

 