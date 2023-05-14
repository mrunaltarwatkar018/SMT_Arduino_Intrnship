// include the library code:

#include <LiquidCrystal.h>


// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(7, 9, 10, 11, 12, 13);


//----------------- store the custom characters in arrays ---------------------//

byte heart[8] = 

              {

                0b11100,

                0b11111,

                0b11111,

                0b11100,

                0b10000,

                0b10000,

               0b10000,

               0b10000,

              };


byte smile[8] = 

              {

                0b00000,

                0b00000,

                0b01010,

                0b00000,

                0b10001,

                0b01110,

                0b00000,

                0b00000

              };


//----------------- store the custom characters in arrays ---------------------//


// give the LED pin a name:

int led = 9;


void setup() {

  //---- create custom characters ----//

  lcd.createChar(1, heart);

  lcd.createChar(2, smile);

  //---- create custom characters ----//

  

  // initialize the led pin as an output.

  pinMode(led, OUTPUT);

  

  // set up the lcd's number of columns and rows: 

  lcd.begin(16, 2);

  

  lcd.print("Utkarsha");

  lcd.setCursor(0, 1);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

}


void loop()

{

  //---- blink LED -----//

  digitalWrite(led, HIGH);       

  delay(1000);

  digitalWrite(led, LOW);

  delay(1000);

   //---- blink LED -----//

}