const int LEDpin = 12;  
const int photoPIN = A0;  
    
void setup() {  
  // initializing the serial communication:  
  Serial.begin(9600);  
  pinMode(A0, INPUT);  
  pinMode(12, OUTPUT);  
}  
void loop() {  
  // read the sensor:  
  int sensorStatus = analogRead(A0);  
   // now, it will check the reading or status of the sensor is < 200  
  // if it is, LED will be HIGH  
  if (sensorStatus <200)  
  {  
    digitalWrite(12, HIGH); // LED is ON  
    Serial.println(" LED is ON, status of sensor is DARK");  
  }  
  else  
  {  
    digitalWrite(12, LOW);  
    Serial.println(" ***************");  
  }  
}  