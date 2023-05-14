int button = 2;
int led = 13;
int led2 = 12;
int led3 = 11;
int status = false;

void setup(){
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);

pinMode(button, INPUT_PULLUP); // set the internal pull up resistor, unpressed button is HIGH
}



void loop(){

if (digitalRead(button) == true) 
{
status = !status;
digitalWrite(led3, LOW);
digitalWrite(led, HIGH);
delay(300);
digitalWrite(led, LOW);
digitalWrite(led2, HIGH);
delay(300);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
delay(300);
//w
//delay(200); // keeps a small delay



} 
while(digitalRead(button) == false);

delay(200); 
}

