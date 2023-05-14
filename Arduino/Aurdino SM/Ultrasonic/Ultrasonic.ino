// Ultra-sonic distance measurement with using the Buzzer with the help of ardino (water Level Measurement )

const int White = 6;
const int Green = 7;
const int Red = 8;
const int trigPin = 9;
const int echoPin = 10;
const int Buzzer = 11;
// const char a;
long duration;
int distance;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(White, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Red, OUTPUT);
  // pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034/2;
  Serial.print("Distance : ");
  Serial.println(distance);

  if ( distance < 50 ) {
    digitalWrite(White, HIGH);
    // delayMicroseconds(2);
    // delay(2000);
  } 
  if ( distance < 40 ) {
    digitalWrite(White, HIGH);
    digitalWrite(Green, HIGH);
    // delay(2000);
  } 
  if (  distance < 30 ) {
    digitalWrite(White, HIGH);
    digitalWrite(Green, HIGH);
    digitalWrite( Red, HIGH );
    // delay(2000);
  }
  if ( distance < 20 ) {
    digitalWrite(White, HIGH);
    digitalWrite(Green, HIGH);
    digitalWrite(Red, HIGH );
    digitalWrite(Buzzer, HIGH);
    // delay(500);
  } else {
    digitalWrite(Buzzer, LOW);
    // delayMicrosecond();
  }

}
