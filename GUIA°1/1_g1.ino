bool boton = false;
int contar = 0;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
  {
  	
	if(  digitalRead(2) == LOW )
    {
      boton = !boton;
      delay(300);
      contar = contar + 1;
      if(contar == 4)
        contar=1;
    }


  	
  	if( contar == 1 )
    {
      	digitalWrite( 3 , HIGH );
      	digitalWrite( 6 , LOW );
      	digitalWrite( 8 , LOW );
    }

  	else if( contar == 2 ){
    	digitalWrite( 3 , LOW );
      	digitalWrite( 6 , HIGH );
      	digitalWrite( 8 , LOW );
    }
  
  	else if( contar == 3 ){
    	digitalWrite( 3 , LOW );
      	digitalWrite( 6 , LOW );
      	digitalWrite( 8 , HIGH );
    }
  else if( contar == 0 ){
    digitalWrite( 3 , HIGH );
    digitalWrite( 6 , HIGH );
    digitalWrite( 8 , HIGH );
  }
}