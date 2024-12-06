#include <Servo.h>

Servo giro;  
Servo hombro;
Servo codo;
Servo muneca1;
Servo muneca2;
Servo pinza;

int posG = 100;
int posH = 30;
int posC = 130;
int posM1 = 50;  
int posM2 = 50;
int posP = 50;


void setup() {
 
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(13,INPUT_PULLUP);
 
 
  giro.attach(7);
  hombro.attach(8);
  codo.attach(9);
  muneca1.attach(10);
  muneca2.attach(11);
  pinza.attach(12);

 
  Serial.begin(9800);
}

void loop() {

//joystick uno(giro X & hombro Y)
 
  Serial.print ( "x:" ) ;
  Serial.print ( analogRead(A0) ) ;
  Serial.print ( "   y:" ) ;
  Serial.print ( analogRead(A1) ) ;
  Serial.print ( "   w:" ) ;
  Serial.print ( analogRead(A2) ) ;
  Serial.print ( "   z:" ) ;
  Serial.print ( analogRead(A3) ) ;
  Serial.print ( "   m:" ) ;
  Serial.print ( analogRead(A4) ) ;

  Serial.print ( "\t\t") ;
 
  Serial.print ( "G:" ) ;
  Serial.print (posG  ) ;
  Serial.print ( "  " ) ;
  Serial.print ( "H:" ) ;
  Serial.print ( posH ) ;
  Serial.print ( "  " ) ;
  Serial.print ( "C:" ) ;
  Serial.print (posC  ) ;
  Serial.print ( "  " ) ;
  Serial.print ( "M1:" ) ;
  Serial.print ( posM1 ) ;
  Serial.print ( "  " ) ;
  Serial.print ( "M2:" ) ;
  Serial.print ( "  " ) ;
  Serial.print ( posM2 );

  Serial.print ( "\t\t") ;
  Serial.println ( digitalRead(13) ) ;


 if(analogRead(A0) <= 350 && posG <= 170)
  {
    posG += 1;
    giro.write(posG);
    delay(50);
  }else if(analogRead(A0) >= 900 && posG >= 20){
    posG -= 1;
    giro.write(posG);
    delay(50);
  }  
 
  if(analogRead(A1) <= 350 && posH <= 170)
  {
    posH += 1;
    hombro.write(posH);
    delay(50);
  }else if(analogRead(A1) >= 900 && posH >= 20){
    posH -= 1;
    hombro.write(posH);
    delay(50);
  }

  if(analogRead(A2) <= 350 && posC <= 170)
  {
    posC += 1;
    codo.write(posC);
    delay(50);
  }else if(analogRead(A2) >= 900 && posC >= 20){
    posC -= 1;
    codo.write(posC);
    delay(50);
  }
 
 
  if(analogRead(A3) <= 350 && posM1 <= 170)
  {
    posM1 += 1;
    muneca1.write(posM1);
    delay(30);
  }else if(analogRead(A3) >= 1000 && posM1 >= 20){
    posM1 -= 1;
    muneca1.write(posM1);
    delay(50);
  }

 if(analogRead(A4) <= 350 && posM2 <= 170)
  {
    posM2 += 1;
    muneca2.write(posM2);
    delay(30);
  }else if(analogRead(A4) >= 1000 && posM2 >= 20){
    posM2 -= 1;
    muneca2.write(posM2);
    delay(50);
  }

  if( digitalRead(13) == LOW )
  {
      pinza.write(0);
  }else if( digitalRead(13) == HIGH )
  {
     pinza.write(50);
  }

}