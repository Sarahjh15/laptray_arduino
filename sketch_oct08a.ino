const int servoRightPin = 9;
const int servoLeftPin = 10;
int servoAngle = 0;

void setup() {
  Serial.begin(9600);
  pinMode(servoRightPin, OUTPUT);
  pinMode(servoLeftPin, OUTPUT);
}

void loop() {
  if(Serial.available())
  {
    char data = Serial.read();
    Serial.write(data);
    if(data == '2')
    {
      servoAngle = -90;
    }
    else if(data == '1')
    {
      servoAngle = 0;
    }
    else if (data == '0')
    {
      servoAngle = 90;
    }
  }
  if(servoAngle == 90)
  {
    digitalWrite(servoRightPin, HIGH);
    digitalWrite(servoLeftPin, HIGH);
    delay(0.5);
    digitalWrite(servoRightPin, LOW);
    digitalWrite(servoLeftPin, LOW);
    delay(19.5);
  }
  else if(servoAngle ==0)
  {
    digitalWrite(servoRightPin, HIGH);
    digitalWrite(servoLeftPin, HIGH);
    delay(1.25);
    digitalWrite(servoRightPin, LOW);
    digitalWrite(servoLeftPin, LOW);
    delay(18.75); 
  }
  else if(servoAngle == -90)
  {
    digitalWrite(servoRightPin, HIGH);
    digitalWrite(servoLeftPin, HIGH);
    delay(2);
    digitalWrite(servoRightPin, LOW);
    digitalWrite(servoLeftPin, LOW);
    delay(18);
  }
}
