#define button_pin 5
int led = 7;
int button_pressed_count = 0;
int button_state = 0;
int prev_button_state = 0;

void setup() {
Serial.begin(9600);

pinMode(button_pin, INPUT_PULLUP);

pinMode(8, OUTPUT);
digitalWrite(8, LOW);

Serial.println("Button Count: ");


}

void loop() {
button_state = digitalRead(button_pin);

if (button_state != prev_button_state) 

{
if (button_state == HIGH) {

digitalWrite(8, LOW);
}

else {
digitalWrite(8, HIGH);
button_pressed_count++;
Serial.println(button_pressed_count);

if (button_pressed_count == 2)
{ digitalWrite(led, HIGH);
delay(1000);
digitalWrite(led, LOW);
delay(500);
}


}
delay (50);

}
prev_button_state = button_state;
if (button_pressed_count == 5)
{ 
  button_state=0;
  button_pressed_count = 0;
}
}