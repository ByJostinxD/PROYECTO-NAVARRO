
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  bool boton1 = digitalRead( 2 );
 
  if( boton1 == HIGH)
  {
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(500);
  }else{
    digitalWrite(3, LOW);
  }
 
 
}
