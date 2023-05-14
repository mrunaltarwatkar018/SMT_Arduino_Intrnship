// without push button

const int led_1 = 0;
const int led_2 = 1;
const int led_3 = 2;
const int led_4 = 3;
const int led_5 = 5;
const int led_6 = 6;
const int led_7 = 7;

// int status = false;


void setup() {
  // put your setup code here, to run once:
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  /* Pattern 1 */
  
  digitalWrite(0, LOW); 
  delay(300);
  digitalWrite(1, LOW); 
  delay(300);
  digitalWrite(2, LOW); 
  delay(300);
  digitalWrite(3, LOW); 
  delay(300);
  digitalWrite(5, LOW); 
  delay(300);
  digitalWrite(6, LOW); 
  delay(300);
  digitalWrite(7, LOW); 
  delay(300);
  
  digitalWrite(0, HIGH); 
  delay(200);
  digitalWrite(1, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(3, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(6, HIGH); 
  delay(200);
  digitalWrite(7, HIGH); 
  delay(200);



  /* Pattern 2 */

  digitalWrite(7, LOW); 
  delay(300);
  digitalWrite(6, LOW); 
  delay(300);
  digitalWrite(5, LOW); 
  delay(300);
  digitalWrite(3, LOW); 
  delay(300);
  digitalWrite(2, LOW); 
  delay(300);
  digitalWrite(1, LOW); 
  delay(300);
  digitalWrite(0, LOW); 
  delay(300);
    
  digitalWrite(7, HIGH); 
  delay(200);
  digitalWrite(6, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(3, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(1, HIGH); 
  delay(200);
  digitalWrite(0, HIGH); 
  delay(200);



  /* Pattern 3 */

  digitalWrite(7, LOW); 
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW); 
  delay(300);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW); 
  digitalWrite(0, HIGH); 
  delay(300); //Rep1

  digitalWrite(7, LOW); 
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW); 
  delay(300);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW); 
  digitalWrite(0, HIGH); 
  delay(300); //Rep2

  digitalWrite(7, LOW); 
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW); 
  delay(300);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW); 
  digitalWrite(0, HIGH); 
  delay(300); //Rep3

  digitalWrite(7, LOW); 
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW); 
  delay(300);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW); 
  digitalWrite(0, HIGH); 
  delay(300); //Rep4

  digitalWrite(7, LOW); 
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW); 
  delay(300);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW); 
  digitalWrite(0, HIGH); 
  delay(300); //Rep5

  digitalWrite(7, LOW); 
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW); 
  delay(300);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW); 
  digitalWrite(0, HIGH); 
  delay(300); //Rep6

  digitalWrite(7, LOW); 
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW); 
  delay(300);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW); 
  digitalWrite(0, HIGH); 
  delay(300); //Rep7

  digitalWrite(7, LOW); 
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW); 
  delay(300);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW); 
  digitalWrite(0, HIGH); 
  delay(300); //Rep8

  digitalWrite(6, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(1, HIGH); 
  delay(200);



  /* Pattern 4 */

  digitalWrite(0, LOW); 
  delay(300);
  digitalWrite(1, LOW); 
  delay(300);
  digitalWrite(2, LOW); 
  delay(300);
  digitalWrite(3, LOW); 
  delay(300);
  digitalWrite(5, LOW); 
  delay(300);
  digitalWrite(6, LOW); 
  delay(300);
  digitalWrite(7, LOW); 
  delay(300);
    
  digitalWrite(7, HIGH); 
  delay(200);
  digitalWrite(6, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(3, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(1, HIGH); 
  delay(200);
  digitalWrite(0, HIGH); 
  delay(200);


  /* Pattern 5 */

  digitalWrite(7, LOW); 
  delay(300);
  digitalWrite(6, LOW); 
  delay(300);
  digitalWrite(5, LOW); 
  delay(300);
  digitalWrite(3, LOW); 
  delay(300);
  digitalWrite(2, LOW); 
  delay(300);
  digitalWrite(1, LOW); 
  delay(300);
  digitalWrite(0, LOW); 
  delay(300);
    
  digitalWrite(0, HIGH); 
  delay(200);
  digitalWrite(1, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(3, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(6, HIGH); 
  delay(200);
  digitalWrite(7, HIGH); 
  delay(200);


  /* Pattern 6 */

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 1

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 2

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 3

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 4

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 5


  /* Pattern 7 */

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
    
  digitalWrite(0, HIGH); 
  delay(200);
  digitalWrite(1, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(3, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(6, HIGH); 
  delay(200);
  digitalWrite(7, HIGH); 
  delay(200);

  /* Pattern 8 */

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(0, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);

  digitalWrite(7, HIGH); 
  delay(200);
  digitalWrite(6, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(3, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(1, HIGH); 
  delay(200);
  digitalWrite(0, HIGH); 
  delay(200);


  /* Pattern 9 */

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep1  

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep2 

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep3 

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep4 

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep5 

  /* Pattern 10 */
  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(100);

  digitalWrite(0, LOW); 
  delay(100);
    
  digitalWrite(7, HIGH); 
  delay(200);
  digitalWrite(6, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(3, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(1, HIGH); 
  delay(200);
  digitalWrite(0, HIGH); 
  delay(200);

  /* Pattern 11 */

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW); 
  delay(100);
  digitalWrite(1, HIGH);
  digitalWrite(0, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(100);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);

  digitalWrite(7, LOW); 
  delay(100);

  digitalWrite(0, HIGH); 
  delay(200);
  digitalWrite(1, HIGH); 
  delay(200);
  digitalWrite(2, HIGH); 
  delay(200);
  digitalWrite(3, HIGH); 
  delay(200);
  digitalWrite(5, HIGH); 
  delay(200);
  digitalWrite(6, HIGH); 
  delay(200);
  digitalWrite(7, HIGH); 
  delay(200);

  //Pattern 06 Repeat
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 1

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 2

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 3

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 4

  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100);  
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100);   
  digitalWrite(3, LOW); 
  delay(100);   

  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100);  
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100);   
  digitalWrite(3, HIGH); 
  delay(100); //Rep 5


  /* Pattern 12 */

  digitalWrite(0, LOW); 
  delay(200);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(200);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  delay(200);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW); 
  delay(200);

  digitalWrite(0, LOW); 
  delay(200);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(200);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW); 
  delay(200);

  digitalWrite(0, LOW); 
  delay(200);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(200);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW); 
  delay(200);

  digitalWrite(0, LOW); 
  delay(200);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(200);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW); 
  delay(200);

  digitalWrite(0, LOW); 
  delay(200);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(200);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW); 
  delay(200);

  digitalWrite(0, LOW); 
  delay(200);
  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(200);

  digitalWrite(0, LOW); 
  delay(200);
    
  digitalWrite(7, HIGH); 
  delay(200);

  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);

  digitalWrite(5, HIGH); 
  digitalWrite(6, LOW);
  delay(200);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);

  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(6, LOW);
  delay(200);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);

  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(6, LOW);
  delay(200);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);

  digitalWrite(1, HIGH); 
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(6, LOW);
  delay(200);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);

  digitalWrite(0, HIGH); 
  digitalWrite(1, LOW); 
  delay(200);
  digitalWrite(1, HIGH); 
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(6, LOW);
  delay(200);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);

  /* Pattern 13 */

  digitalWrite(7, LOW); 
  delay(200);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(200);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW); 
  delay(200);
  digitalWrite(1, HIGH);
  digitalWrite(0, LOW); 
  delay(200);

  digitalWrite(7, LOW); 
  delay(200);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(200);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(200);
  digitalWrite(2, HIGH);
  digitalWrite(1, LOW); 
  delay(200);

  digitalWrite(7, LOW); 
  delay(200);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(200);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW); 
  delay(200);

  digitalWrite(7, LOW); 
  delay(200);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(200);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW); 
  delay(200);

  digitalWrite(7, LOW); 
  delay(200);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(200);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW); 
  delay(200);

  digitalWrite(7, LOW); 
  delay(200);
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(200);

  digitalWrite(7, LOW); 
  delay(200);
    
  digitalWrite(0, HIGH); 
  delay(200);

  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW);
  delay(200);
  digitalWrite(0, HIGH);
  delay(200);

  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW);
  delay(200);
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW);
  delay(200);
  digitalWrite(0, HIGH);
  delay(200);

  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW);
  delay(200);
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW);
  delay(200);
  digitalWrite(0, HIGH);
  delay(200);

  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW);
  delay(200);
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW);
  delay(200);
  digitalWrite(0, HIGH);
  delay(200);

  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW);
  delay(200);
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW);
  delay(200);
  digitalWrite(0, HIGH);
  delay(200);

  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  delay(200);
  digitalWrite(6, HIGH); 
  digitalWrite(5, LOW); 
  delay(200);
  digitalWrite(5, HIGH); 
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(3, HIGH); 
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(2, HIGH); 
  digitalWrite(1, LOW);
  delay(200);
  digitalWrite(1, HIGH); 
  digitalWrite(0, LOW);
  delay(200);
  digitalWrite(0, HIGH);
  delay(200);

  //Pattern 09 Repeat
  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep1  

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep2 

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep3 

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep4 

  digitalWrite(3, LOW); 
  delay(100);
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW);
  delay(100); 
  digitalWrite(1, LOW); 
  digitalWrite(6, LOW);
  delay(100); 
  digitalWrite(0, LOW); 
  digitalWrite(7, LOW);
  delay(100); 
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, HIGH); 
  digitalWrite(5, HIGH);
  delay(100); 
  digitalWrite(1, HIGH); 
  digitalWrite(6, HIGH);
  delay(100); 
  digitalWrite(0, HIGH); 
  digitalWrite(7, HIGH);
  delay(100); //Rep5 

}
