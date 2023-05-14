int button = 8;
int led = 13;
int status = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);  // set the internal pull up redidtor, unpressed button is HIGH

}

void loop() {
  // put your main code here, to run repeatedly:
  // a) if the button is not pressed the false status is reversed by !status and the LED tuens ON
  // b) if the button is pressed the true status is reversed by !status and the LED turns OFF

  if ( digitalRead(button) == true ) {
    status = !status;
    digitalWrite(led, status);
  }

  while ( digitalRead(button) == true ) {
    delay(50);  // keeps a small delay
  }
}





