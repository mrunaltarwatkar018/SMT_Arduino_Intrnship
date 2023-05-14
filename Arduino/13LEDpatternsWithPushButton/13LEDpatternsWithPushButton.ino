// with push button 7 LED 13 Patterns
const int Led_1 = 13;
const int Led_2 = 12;
const int Led_3 = 11;
const int Led_4 = 10;
const int Led_5 = 9;
const int Led_6 = 8;
const int Led_7 = 7;  

int buttonPin = 6;  //the number of the pushbutton pin

// int de=500;  // delay time

int p=0;    // variable for pattens

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // put your setup code here, to run once:
  pinMode(Led_1, OUTPUT);
  pinMode(Led_2, OUTPUT);
  pinMode(Led_3, OUTPUT);

  pinMode(Led_4, OUTPUT);
  pinMode(Led_5, OUTPUT);
  pinMode(Led_6, OUTPUT);
  pinMode(Led_7, OUTPUT);
  
  pinMode(buttonPin, INPUT);
  // pinMode(buttonPin, INPUT_PULLUP);


}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  if (buttonState == 1) {
      p++;
      delay(1000);
  } 

  /* Pattern 1 */
 
  if (p==1) {

    // digitalWrite(LED_1, 0); 
    // delay(300);
    // digitalWrite(LED_2, 0); 
    // delay(300);
    // digitalWrite(LED_3, 0); 
    // delay(300);
    // digitalWrite(LED_4, 0); 
    // delay(300);
    // digitalWrite(LED_5, 0); 
    // delay(300);
    // digitalWrite(LED_6, 0); 
    // delay(300);
    // digitalWrite(LED_7, 0); 
    // delay(300);
    
    digitalWrite(LED_1, 1); 
    delay(200);
    digitalWrite(LED_2, 1); 
    delay(200);
    digitalWrite(LED_3, 1); 
    delay(200);
    digitalWrite(LED_4, 1); 
    delay(200);
    digitalWrite(LED_5, 1); 
    delay(200);
    digitalWrite(LED_6, 1); 
    delay(200);
    digitalWrite(LED_7, 1); 
    delay(200);

  }
  
  
  
  /* Pattern 2 */
  if(p==2) {

      // digitalWrite(LED_7, 0); 
      // delay(300);
      // digitalWrite(LED_6, 0); 
      // delay(300);
      // digitalWrite(LED_5, 0); 
      // delay(300);
      // digitalWrite(LED_4, 0); 
      // delay(300);
      // digitalWrite(LED_3, 0); 
      // delay(300);
      // digitalWrite(LED_2, 0); 
      // delay(300);
      // digitalWrite(LED_1, 0); 
      // delay(300);
        
      digitalWrite(LED_7, 1); 
      delay(200);
      digitalWrite(LED_6, 1); 
      delay(200);
      digitalWrite(LED_5, 1); 
      delay(200);
      digitalWrite(LED_4, 1); 
      delay(200);
      digitalWrite(LED_3, 1); 
      delay(200);
      digitalWrite(LED_2, 1); 
      delay(200);
      digitalWrite(LED_1, 1); 
      delay(200);  
  
  }
  
  /* Pattern 3 */

  if(p==3) {

    digitalWrite(LED_7, 0); 
    digitalWrite(LEd_6, 1); 
    digitalWrite(LED_5, 0); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    digitalWrite(LED_2, 1); 
    digitalWrite(LEd_1, 0); 
    delay(300);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_1, 1);  
    delay(300); //Rep1

    digitalWrite(LED_7, 0); 
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0); 
    delay(300);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_1, 1); 
    delay(300); //Rep2

    digitalWrite(LED_7, 0); 
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0); 
    delay(300);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_1, 1); 
    delay(300); //Rep3

    digitalWrite(LED_7, 0); 
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0); 
    delay(300);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_1, 1); 
    delay(300); //Rep4

    digitalWrite(LED_7, 0); 
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0); 
    delay(300);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_1, 1); 
    delay(300); //Rep5

    digitalWrite(LED_7, 0); 
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0); 
    delay(300);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_1, 1); 
    delay(300); //Rep6

    digitalWrite(LED_7, 0); 
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0); 
    delay(300);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_1, 1); 
    delay(300); //Rep7

    digitalWrite(LED_7, 0); 
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0); 
    delay(300);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_1, 1); 
    delay(300); //Rep8

    digitalWrite(LED_6, 1); 
    digitalWrite(LED_3, 1); 
    digitalWrite(1, 1); 
    delay(200);

  }
  
  /* Pattern 4 */
  
  if(p==4) {

    digitalWrite(LED_1, 0); 
    delay(300);
    digitalWrite(LED_2, 0); 
    delay(300);
    digitalWrite(LED_3, 0); 
    delay(300);
    digitalWrite(LED_4, 0); 
    delay(300);
    digitalWrite(LED_5, 0); 
    delay(300);
    digitalWrite(LED_6, 0); 
    delay(300);
    digitalWrite(LED_7, 0); 
    delay(300);
      
    digitalWrite(LED_7, 1); 
    delay(200);
    digitalWrite(LED_6, 1); 
    delay(200);
    digitalWrite(LED_5, 1); 
    delay(200);
    digitalWrite(LED_4, 1); 
    delay(200);
    digitalWrite(LED_3, 1); 
    delay(200);
    digitalWrite(LED_2, 1); 
    delay(200);
    digitalWrite(LED_1, 1); 
    delay(200);
 
  }
  
  /* Pattern 5 */
  if(p==5) {
 
    digitalWrite(LED_7, 0); 
    delay(300);
    digitalWrite(LED_6, 0); 
    delay(300);
    digitalWrite(LED_5, 0); 
    delay(300);
    digitalWrite(LED_4, 0);
    delay(300);
    digitalWrite(LED_3, 0); 
    delay(300);
    digitalWrite(LED_2, 0); 
    delay(300);
    digitalWrite(LED_1, 0); 
    delay(300);
      
    digitalWrite(LED_1, 1); 
    delay(200);
    digitalWrite(LED_2, 1); 
    delay(200);
    digitalWrite(LED_3, 1); 
    delay(200);
    digitalWrite(LED_4, 1); 
    delay(200);
    digitalWrite(LED_5, 1); 
    delay(200);
    digitalWrite(LED_6, 1); 
    delay(200);
    digitalWrite(LED_7, 1); 
    delay(200);

  }
 

 /* Pattern 6 */
 if(p==6) {

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 1

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 2

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 3

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 4

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 5 
 
  }  
 
  /* Pattern 7 */

  if ( p == 7 ) {
    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1);
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_7, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1);
    digitalWrite(LED_6, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1);
    digitalWrite(LED_3, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_2, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
      
    digitalWrite(LED_1, 1); 
    delay(200);
    digitalWrite(LED_2, 1); 
    delay(200);
    digitalWrite(LED_3, 1); 
    delay(200);
    digitalWrite(LED_4, 1); 
    delay(200);
    digitalWrite(LED_5, 1); 
    delay(200);
    digitalWrite(LED_6, 1); 
    delay(200);
    digitalWrite(LED_7, 1); 
    delay(200);

  }


  /* Pattern 8 */

  if ( p == 8 ) {

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0);
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1);
    digitalWrite(LED_1, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0);
    delay(100);
    digitalWrite(LED_4, 1);
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0);
    delay(100);
    digitalWrite(LED_4, 1);
    digitalWrite(LED_3, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0);
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);

    digitalWrite(LED_7, 1); 
    delay(200);
    digitalWrite(LED_6, 1); 
    delay(200);
    digitalWrite(LED_5, 1); 
    delay(200);
    digitalWrite(LED_4, 1); 
    delay(200);
    digitalWrite(LED_3, 1); 
    delay(200);
    digitalWrite(LED_2, 1); 
    delay(200);
    digitalWrite(LED_1, 1); 
    delay(200);

  }

  /* Pattern 9 */

  if ( p == 9 ) {

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep1  

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep2 

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep3 

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep4 

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep5 

  }
  
  /* Pattern 10 */

  if ( p == 10 ) {

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1);
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_7, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1);
    digitalWrite(LED_6, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(100);

    digitalWrite(LED_1, 0); 
    delay(100);
      
    digitalWrite(LED_7, 1); 
    delay(200);
    digitalWrite(LED_6, 1); 
    delay(200);
    digitalWrite(LED_5, 1); 
    delay(200);
    digitalWrite(LED_4, 1); 
    delay(200);
    digitalWrite(LED_3, 1); 
    delay(200);
    digitalWrite(LED_2, 1); 
    delay(200);
    digitalWrite(LED_1, 1); 
    delay(200);

  }

  /* Pattern 11 */

  if ( p == 11 ) {

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1);
    digitalWrite(LED_2, 0); 
    delay(100);
    digitalWrite(LED_2, 1);
    digitalWrite(LED_1, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_3, 1);
    digitalWrite(LED_2, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(100);

    digitalWrite(LED_7, 0); 
    delay(100);

    digitalWrite(LED_1, 1); 
    delay(200);
    digitalWrite(LED_2, 1); 
    delay(200);
    digitalWrite(LED_3, 1); 
    delay(200);
    digitalWrite(LED_4, 1); 
    delay(200);
    digitalWrite(LED_5, 1); 
    delay(200);
    digitalWrite(LED_6, 1); 
    delay(200);
    digitalWrite(LED_7, 1); 
    delay(200);

    //Pattern 06 Repeat
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 1

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 2

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 3

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 4

    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100);  
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100);   
    digitalWrite(LED_3, 0); 
    delay(100);   

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100);  
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100);   
    digitalWrite(LED_3, 1); 
    delay(100); //Rep 5

  }


  /* Pattern 12 */

  if ( p == 12 ) {
 
    digitalWrite(LED_1, 0); 
    delay(200);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(200);
    digitalWrite(LED_4, 1);
    digitalWrite(LED_5, 0); 
    delay(200);
    digitalWrite(LED_5, 1);
    digitalWrite(LED_6, 0); 
    delay(200);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_7, 0); 
    delay(200);

    digitalWrite(LED_1, 0); 
    delay(200);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(200);
    digitalWrite(LED_4, 1);
    digitalWrite(LED_5, 0); 
    delay(200);
    digitalWrite(LED_5, 1);
    digitalWrite(LED_6, 0); 
    delay(200);

    digitalWrite(LED_1, 0); 
    delay(200);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(200);
    digitalWrite(LED_4, 1);
    digitalWrite(LED_5, 0); 
    delay(200);

    digitalWrite(LED_1, 0); 
    delay(200);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0); 
    delay(200);

    digitalWrite(LED_1, 0); 
    delay(200);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);

    digitalWrite(LED_1, 0); 
    delay(200);
    digitalWrite(LED_1, 1);
    digitalWrite(LED_2, 0); 
    delay(200);

    digitalWrite(LED_1, 0); 
    delay(200);
      
    digitalWrite(LED_7, 1); 
    delay(200);

    digitalWrite(LED_6, 1); 
    digitalWrite(LED_7, 0);
    delay(200);
    digitalWrite(LED_7, 1);
    delay(200);

    digitalWrite(LED_5, 1); 
    digitalWrite(LED_6, 0);
    delay(200);
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_7, 0);
    delay(200);
    digitalWrite(LED_7, 1);
    delay(200);

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0);
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_6, 0);
    delay(200);
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_7, 0);
    delay(200);
    digitalWrite(LED_7, 1);
    delay(200);

    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0);
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0);
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_6, 0);
    delay(200);
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_7, 0);
    delay(200);
    digitalWrite(LED_7, 1);
    delay(200);

    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0);
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0);
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_6, 0);
    delay(200);
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_7, 0);
    delay(200);
    digitalWrite(LED_7, 1);
    delay(200);

    digitalWrite(LED_1, 1); 
    digitalWrite(LED_2, 0); 
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_4, 0);
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_5, 0);
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_6, 0);
    delay(200);
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_7, 0);
    delay(200);
    digitalWrite(LED_7, 1);
    delay(200);

  }
  /* Pattern 13*/

  if ( p == 13 ) {

    digitalWrite(LED_7, 0); 
    delay(200);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(200);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);
    digitalWrite(LED_3, 1);
    digitalWrite(LED_2, 0); 
    delay(200);
    digitalWrite(LED_2, 1);
    digitalWrite(LED_1, 0); 
    delay(200);

    digitalWrite(LED_7, 0); 
    delay(200);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(200);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);
    digitalWrite(LED_3, 1);
    digitalWrite(LED_2, 0); 
    delay(200);

    digitalWrite(LED_7, 0); 
    delay(200);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(200);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0); 
    delay(200);

    digitalWrite(LED_7, 0); 
    delay(200);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(200);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0); 
    delay(200);

    digitalWrite(LED_7, 0); 
    delay(200);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(200);
    digitalWrite(LED_6, 1);
    digitalWrite(LED_5, 0); 
    delay(200);

    digitalWrite(LED_7, 0); 
    delay(200);
    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(200);

    digitalWrite(LED_7, 0);
    delay(200);
      
    digitalWrite(LED_1, 1);
    delay(200);

    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0);
    delay(200);
    digitalWrite(LED_1, 1);
    delay(200);

    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0);
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0);
    delay(200);
    digitalWrite(LED_1, 1);
    delay(200);

    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0);
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0);
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0);
    delay(200);
    digitalWrite(LED_1, 1);
    delay(200);

    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0);
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0);
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0);
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0);
    delay(200);
    digitalWrite(LED_1, 1);
    delay(200);

    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0);
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0);
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0);
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0);
    delay(200);
    digitalWrite(LED_1, 1);
    delay(200);

    digitalWrite(LED_7, 1); 
    digitalWrite(LED_6, 0); 
    delay(200);
    digitalWrite(LED_6, 1); 
    digitalWrite(LED_5, 0); 
    delay(200);
    digitalWrite(LED_5, 1); 
    digitalWrite(LED_4, 0);
    delay(200);
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_3, 0);
    delay(200);
    digitalWrite(LED_3, 1); 
    digitalWrite(LED_2, 0);
    delay(200);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_1, 0);
    delay(200);
    digitalWrite(LED_1, 1);
    delay(200);

    //Pattern 09 Repeat

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep1  

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep2 

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep3 

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep4 

    digitalWrite(LED_3, 0); 
    delay(100);
    digitalWrite(LED_2, 0); 
    digitalWrite(LED_5, 0);
    delay(100); 
    digitalWrite(LED_1, 0); 
    digitalWrite(LED_6, 0);
    delay(100); 
    digitalWrite(LED_4, 0); 
    digitalWrite(LED_7, 0);
    delay(100); 
    
    digitalWrite(LED_3, 1); 
    delay(100);
    digitalWrite(LED_2, 1); 
    digitalWrite(LED_5, 1);
    delay(100); 
    digitalWrite(LED_1, 1); 
    digitalWrite(LED_6, 1);
    delay(100); 
    digitalWrite(LED_4, 1); 
    digitalWrite(LED_7, 1);
    delay(100); //Rep5

  }

  /* Pattern 14 */
  if(p==14) {

    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //1,7
    p=0;

  } 
             
}
