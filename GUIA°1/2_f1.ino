
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
 	int tiempo = analogRead(A1);
  	int x = map ( tiempo , 0 , 1023 , 0 , 1000);

  digitalWrite(3, HIGH);
  digitalWrite(3, LOW);
  delay(x);
}