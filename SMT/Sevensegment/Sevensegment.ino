int a = 13; //Arduino pins connected with 7 segment pins      
int b = 12;      
int c = 11;    
int d = 10;    
int e = 9;     
int f = 8;    
int g = 7;

void setup() {                
//Declaring all the pins as output  
pinMode(a, OUTPUT);      pinMode(b, OUTPUT);     pinMode(c, OUTPUT);
pinMode(d, OUTPUT);      pinMode(e, OUTPUT);     pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);       //Generating 1
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);      //Generating 2
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);               // wait for a second 
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);      //Generating 3
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);               // wait for a second
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);     //Generating 4
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);               // wait for a second
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);     //Generating 5
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);               // wait for a second
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);    //Generating 6
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);               // wait for a second
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);   //Generating 7
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(a, LOW );
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);     //Generating 8
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);               // wait for a second
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);    //Generating 9
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);               // wait for a second
}