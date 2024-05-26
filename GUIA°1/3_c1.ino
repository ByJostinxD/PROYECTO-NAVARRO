bool boton = false;

void setup()
{
  pinMode(1, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A1, INPUT);
}

void loop()
{
  int tiempo = analogRead(A1);
  
  int x = map ( tiempo , 0 , 1023 , 300, 1500);
  
  if(  digitalRead(1) == LOW ){
    
      boton = !boton;
      delay(400);
    }

  if (boton == true){
    
  	digitalWrite(2, HIGH);
  	delay(x);
  	digitalWrite(4, HIGH);
  	delay(x);
  	digitalWrite(7, HIGH);
 	delay(x);
 	analogWrite(3, 10);
  	delay(x);
 	analogWrite(5, 10);
 	delay(x);
 	analogWrite(6, 10);
 	delay(x);
 	digitalWrite(8, HIGH);
 	digitalWrite(12, HIGH);
 	delay(x);
 	digitalWrite(13, HIGH);
 	analogWrite(11, 255);
 	delay(x);
 	analogWrite(9, 150);
 	delay(x);
  	analogWrite(10, 150);
 	delay(x);
    
  }else{
    digitalWrite(2, LOW);
  	digitalWrite(4, LOW);
  	digitalWrite(7, LOW);
 	analogWrite(3, 0);
 	analogWrite(5, 0);
 	analogWrite(6, 0);
 	digitalWrite(8, LOW);
 	digitalWrite(12, LOW);
 	digitalWrite(13, LOW);
 	analogWrite(11, 0);
 	analogWrite(9, 0);
  	analogWrite(10, 0);
   }
}