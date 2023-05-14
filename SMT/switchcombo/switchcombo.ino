#define LED_1_PIN 11
#define LED_2_PIN 10
#define BUTTON_PIN2 5
#define BUTTON_PIN1 4
void setup()
{
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(BUTTON_PIN2, INPUT_PULLUP);
  pinMode(BUTTON_PIN1, INPUT_PULLUP);
}
void loop()
{
  byte buttonState1 = digitalRead(BUTTON_PIN1);
  byte buttonState2 = digitalRead(BUTTON_PIN2);
  
  
  if (buttonState1 == LOW && buttonState2 == LOW ) {
    digitalWrite(LED_1_PIN, HIGH);
    //digitalWrite(LED_2_PIN, HIGH);
    digitalWrite(LED_2_PIN, HIGH);
  }
  else {
    digitalWrite(LED_1_PIN, LOW);
    //digitalWrite(LED_2_PIN, LOW);
    digitalWrite(LED_2_PIN, LOW);
  }
}