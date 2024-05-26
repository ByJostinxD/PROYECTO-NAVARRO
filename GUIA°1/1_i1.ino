
bool boton1 = false;

void setup()
{
  pinMode(12, INPUT_PULLUP);
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
  
   Serial.begin(9600);
}

void loop()
{
  if(boton1 == HIGH);
  {
  	digitalWrite(2, HIGH);
     delay(1000);
  }
  else if (boton1 == HIGH){
  		digitalWrite(3, HIGH);
  		delay(1000);
  }
  else if (boton1 == HIGH){
    	digitalWrite(4, HIGH);
     	delay(1000);
  }
  else if (boton1 == HIGH){
 	digitalWrite(5, HIGH);
 	delay(1000);
  }
  else if (boton1 == HIGH){
 	digitalWrite(6, HIGH);
	delay(1000);
  }
  else if (boton1 == HIGH){
    digitalWrite(7, HIGH);
 	delay(1000);
  }
  else if (boton1 == HIGH){
 	digitalWrite(8, HIGH);
 	delay(1000);
  }
  else if (boton1 == HIGH){
 	digitalWrite(9, HIGH);
 	delay(1000);
  }
  else if (boton1 == HIGH){
 	digitalWrite(10, HIGH);
	delay(1000);
  }
  else if (boton1 == HIGH){
	digitalWrite(11, HIGH);
	delay(1000);
  }
}