
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  
  tone(3, 1600);
  digitalWrite(5, HIGH);
  delay(300);
  analogWrite(5, 0);
  digitalWrite(6, HIGH);
  tone(3, 1000);
  delay(300);
  analogWrite(6, 0);
}