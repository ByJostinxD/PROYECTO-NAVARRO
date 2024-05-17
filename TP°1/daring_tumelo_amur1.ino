
void setup()
{
  pinMode(3, OUTPUT);
  //ROJO
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  //CIAN
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  //MAGENTA
  pinMode(4, OUTPUT);
}

void loop()
{
  analogWrite(3, 255);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(1000);
  
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(1000);
  
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  analogWrite(9, 100);
  analogWrite(10, 100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(1000);
  
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(200);
}