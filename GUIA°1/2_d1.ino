
void setup()
{
  //MAGENTA
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  //AMARILLO
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
 int tiempo = analogRead(A1);
  
 int x = map ( tiempo , 0 , 1023 , 100, 1500);

  analogWrite(6, 255);
  analogWrite(9, 255);
  analogWrite(3, 255);
  analogWrite(5, 255);
  delay(x);
  
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(3, 0);
  analogWrite(5, 0);
  delay(x);
  
}