// with push button 7 LED Patterns
int Led_1 = 13;
int Led_2 = 12;
int Led_3 = 11;
int Led_4 = 10;
int Led_5 = 9;
int Led_6 = 8;
int Led_7 = 7;  

int buttonPin = 6;  //the number of the pushbutton pin

int de=500;  // delay time

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
  
  // pinMode(buttonPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);


}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
      p++;
      // delay(1000);
  } 
 
  if (p==1) {

    digitalWrite(Led_1, 1); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //1
    delay(de);  
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 1); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //2
    delay(de); 
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 1); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //3
    delay(de); 
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 1); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //4
    delay(de); 
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 1); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //5
    delay(de); 
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 1); 
    digitalWrite(Led_7, 0);  //6
    delay(de); 
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 1);  //7
    delay(de); 

  }
  
  
  
  
  if(p==2) {

    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 1);  //7
    delay(de); 
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 1); 
    digitalWrite(Led_7, 0);  //6
    delay(de);
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 1); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //5
    delay(de); 
    
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 1); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //4
    delay(de);  
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 1); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //3
    delay(de);  
  
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 1); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //2
    delay(de); 
    
    digitalWrite(Led_1, 1); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //1
    delay(de);  
  
  }
  
  if(p==3) {
    digitalWrite(Led_1, 1); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //1
    delay(de);  
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 1); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //2
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 1); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //3
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 1); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //4
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 1); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //5
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 1); 
    digitalWrite(Led_7, 0);  //6
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 1);  //7
    delay(de); 
  
   
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 1); 
    digitalWrite(Led_7, 0);  //6
    delay(de);
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 1); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //5
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 1); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //4
    delay(de);  
 
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 1); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //3
    delay(de);  
 
 
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 1); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //2
    delay(de); 

  }
  
  
  if(p==4) {

    digitalWrite(Led_1, 1); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 1);  //1,7
    delay(de);  
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 1); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 1); 
    digitalWrite(Led_7, 0);  //2,6
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 1); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 1); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //3,5
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 1); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //4
    delay(de); 
 
  }
  
  
  if(p==5) {
 
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 1); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //4
    delay(de); 
  
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 1); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 1); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 0);  //3,5
    delay(de); 
 
    digitalWrite(Led_1, 0); 
    digitalWrite(Led_2, 1); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 1); 
    digitalWrite(Led_7, 0);  //2,6
    delay(de); 
    
    digitalWrite(Led_1, 1); 
    digitalWrite(Led_2, 0); 
    digitalWrite(Led_3, 0); 
    digitalWrite(Led_4, 0); 
    digitalWrite(Led_5, 0); 
    digitalWrite(Led_6, 0); 
    digitalWrite(Led_7, 1);  //1,7
    delay(de);  

  }
 
 if(p==6) {

    digitalWrite(Led_1, 1); 
    delay(de);  
    digitalWrite(Led_2, 1); 
    delay(de); 
    digitalWrite(Led_3, 1);
    delay(de);  
    digitalWrite(Led_4, 1);
    delay(de);  
    digitalWrite(Led_5, 1);
    delay(de);  
    digitalWrite(Led_6, 1);
    delay(de);  
    digitalWrite(Led_7, 1);  //1,7
    delay(de); 
    digitalWrite(Led_7, 0);  //1,7
    delay(de); 
    digitalWrite(Led_6, 0);
    delay(de); 
    digitalWrite(Led_5, 0);
    delay(de); 
    digitalWrite(Led_4, 0);
    delay(de); 
    digitalWrite(Led_3, 0);
    delay(de); 
    digitalWrite(Led_2, 0);
    delay(de); 
    digitalWrite(Led_1, 0);
    delay(de);  
 
  }  
 
 if(p==7) {
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
