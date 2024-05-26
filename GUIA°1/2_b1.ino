void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  
}

void loop()
{
  digitalWrite(2, LOW);
  delay(100);
  analogWrite(3, 40);
  delay(100);
  analogWrite(5, 80);
  analogWrite(3, 0);
  delay(100);
  analogWrite(6, 120);
  analogWrite(5, 0);
  delay(100);
  analogWrite(9, 150);
  analogWrite(6, 0);
  delay(100);
  analogWrite(10, 180);
  analogWrite(9, 0);
  delay(100);
  analogWrite(11, 210);
  analogWrite(10, 0);
  delay(100);
  digitalWrite(13, HIGH);
  analogWrite(11, 0);
  delay(100);
  digitalWrite(13, LOW);
}