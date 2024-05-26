
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  
    int tiempo = analogRead(A1);
  	int piezo = map ( tiempo , 0 , 1023 , 0 , 255);

  analogWrite(3, piezo);
}