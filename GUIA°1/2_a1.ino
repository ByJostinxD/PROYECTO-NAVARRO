
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  analogWrite(2, 255);
  delay(1000);
  analogWrite(3, 5);
  delay(1000);
  analogWrite(4, 150);
  delay(1000);
  analogWrite(5, 70);
  delay(1000);
  analogWrite(6, 123);
  delay(1000);
}