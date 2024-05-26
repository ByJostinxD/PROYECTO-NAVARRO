// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);//R
  pinMode(5, OUTPUT);//A
  pinMode(6, OUTPUT);//V
}

void loop()
{
  analogWrite(3, 0);
  analogWrite(5, 255);
  analogWrite(6, 255);
  delay(1000);
  analogWrite(3, 0);
  analogWrite(5, 200);
  analogWrite(6, 100);
  delay(1000);
  analogWrite(3, 0);
  analogWrite(5, 100);
  analogWrite(6, 155);
  delay(1000);
  
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(1000);
  analogWrite(3, 105);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(1000);
  analogWrite(3, 25);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(1000);
  
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 255);
  delay(1000);
  analogWrite(3, 95);
  analogWrite(5, 0);
  analogWrite(6, 50);
  delay(1000);
  analogWrite(3, 105);
  analogWrite(5, 0);
  analogWrite(6, 205);
  delay(1000);
}