bool boton = false;
int contar = 0;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  	
	if(  digitalRead(2) == LOW )
    {
      boton = !boton;
      delay(300);
      contar = contar + 1;
      if(contar == 8)
        contar=1;
    }


  	
  	if( contar == 1 )
    {
      	digitalWrite(3 , HIGH);
    }

  	else if( contar == 2 ){
    	digitalWrite( 3 , LOW );
      	digitalWrite( 4 , HIGH );
      	digitalWrite( 5 , HIGH );
    }
  
  	else if( contar == 3 ){
    	digitalWrite( 3 , LOW );
      	digitalWrite( 4 , LOW );
      	digitalWrite( 5 , HIGH );
    }
  else if( contar == 4 ){
    digitalWrite( 3 , HIGH );
    digitalWrite( 4 , HIGH );
    digitalWrite( 5 , LOW );
  }
    else if( contar == 5 ){
    digitalWrite( 3 , LOW );
    digitalWrite( 4 , LOW );
    digitalWrite( 5 , HIGH );
  }
    else if( contar == 6 ){
    digitalWrite( 3 , HIGH );
    digitalWrite( 4 , HIGH );
    digitalWrite( 5 , HIGH );
  }
    else if( contar == 7 ){
    digitalWrite( 3 , HIGH );
    digitalWrite( 4 , LOW );
    digitalWrite( 5 , HIGH );
  }
    else if( contar == 0 ){
    digitalWrite( 3 , LOW );
    digitalWrite( 4 , LOW );
    digitalWrite( 5 , LOW );
  }
}