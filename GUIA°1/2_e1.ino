
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
    int tiempo = analogRead(A1);
    int tiempo2 = analogRead(A2);
    int tiempo3 = analogRead(A3);
  	int x = map ( tiempo , 0 , 1023 , 0 , 255);
  	int z = map ( tiempo2 , 0 , 1023 , 0 , 255);
  	int f = map ( tiempo3 , 0 , 1023 , 0 , 255);

  
  analogWrite(3, x);
  delay(1000);
  analogWrite(5, z);
  delay(1000);
  analogWrite(6, f);
  delay(1000);
}