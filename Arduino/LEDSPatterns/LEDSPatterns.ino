

void setup() {
  // put your setup code here, to run once:

  for (int i = 0; i < 10; i++) {

    pinMode(i, OUTPUT);

  }

}


void loop() {

  // put your main code here, to run repeatedly:
  // 1
  for (int c = 0; c < 3; c++) {

    for (int i = -2; i < 7; i++) {
      digitalWrite(i-1, LOW);
      digitalWrite(i, HIGH);
      digitalWrite(i+1, HIGH);
      digitalWrite(i+2, HIGH);
      delay(25);
    }

    for (int i = 8; i > -2; i--) {
      digitalWrite(i+1, LOW);
      digitalWrite(i, HIGH);
      digitalWrite(i-1, HIGH);
      digitalWrite(i-2, HIGH);
      delay(25);
    }  

  }


  // 2
  for (int c = 0; c < 3; c++) {

    for (int i = 0; i < 5; i++) {
      digitalWrite(i, HIGH);
      digitalWrite(8-i, HIGH);
      delay(100);
    }

    for (int i = 0; i < 5; i++) {
      digitalWrite(i, LOW);
      digitalWrite(8-i, LOW);
      delay(100);
    }

  }

  // 3
  for (int c = 0; c < 3; c++) {
    int t = floor(9/2);

    for (int i = 0; i < 5; i++) {
      digitalWrite(t+i, HIGH);
      digitalWrite(t-i, HIGH);
      delay(100);
    }

    for (int i = 0; i < 5; i++) {
      digitalWrite(t+i, LOW);
      digitalWrite(t-i, LOW);
      delay(100);
    }

  }

  // 4

  for (int c = 0; c < 3; c++) {

    int d = 50;

    for (int a = 0; a <10; a++) {

      for (int i = 0; i < 9-a; i++) {
        digitalWrite(i, HIGH);
        delay(40);
        digitalWrite(i, LOW);
      }

      d = d-5;
      digitalWrite(9-a, HIGH);
      delay(d);

    }
  }

  // 5

  for (int c = 0; c < 3; c++) {

    for (int i = 0; i < 5; i++) {
      digitalWrite(i, HIGH);
      delay(25);
      digitalWrite(8-i, HIGH);
      delay(25);
    }

    int t = floor(9/2);

    for (int i = 0; i < 5; i++) {
      digitalWrite(i, LOW);
      delay(25);
      digitalWrite(8-i, LOW);
      delay(25);
    }

    for (int i = 0; i < 5; i++) {
      digitalWrite(t+i, HIGH);
      delay(25);
      digitalWrite(t-i, HIGH);
      delay(25);
    }

    for (int i = 0; i < 5; i++) {
      digitalWrite(t+i, LOW);
      delay(25);
      digitalWrite(t-i, LOW);
      delay(25);
    }

  }


  // 6
  for (int c = 0; c < 3; c++) {

    for (int i = 0; i <10; i++) {
      digitalWrite(i,HIGH);
      delay(30);
      digitalWrite(i, LOW);
    }

    for (int i = 0; i <10; i++) {
      digitalWrite(9-i,HIGH);
      delay(30);
      digitalWrite(9-i, LOW);
    }

  }


  // 7
    for (int r = 0; r<3; r++) {

    digitalWrite(0,LOW);
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    digitalWrite(8,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    delay(100);

    digitalWrite(1,LOW);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    digitalWrite(7,LOW);
    digitalWrite(0,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(8,HIGH);
    delay(100);

    digitalWrite(0,LOW);
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    digitalWrite(8,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    delay(100);

    digitalWrite(1,LOW);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    digitalWrite(7,LOW);
    digitalWrite(0,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(8,HIGH);
    delay(100);

  }

}