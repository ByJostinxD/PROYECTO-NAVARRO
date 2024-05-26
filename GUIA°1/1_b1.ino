// C++ code
//
void setup()
{
  pinMode(2, OUTPUT); //1
  pinMode(3, OUTPUT); //2
  pinMode(4, OUTPUT); //3
  pinMode(5, OUTPUT); //4
  pinMode(6, OUTPUT); //5
  pinMode(7, OUTPUT); //6
  pinMode(8, OUTPUT); //7
  pinMode(9, OUTPUT); //8
  pinMode(10, OUTPUT); //9
  pinMode(11, OUTPUT); //10
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(1000);
 
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);
}