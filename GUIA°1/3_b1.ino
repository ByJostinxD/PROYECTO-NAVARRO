
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(6, HIGH);
  delay(1000);
}