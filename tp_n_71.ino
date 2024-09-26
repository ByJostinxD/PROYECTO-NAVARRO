#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_E3  165
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784

#define length(vec,tipo) sizeof(vec)/sizeof(tipo)


int   nota[] = {NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_E3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_B3, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_B4, NOTE_E5,  NOTE_F5, NOTE_E5, NOTE_F5, NOTE_G5,  NOTE_E5, NOTE_G4, NOTE_E4};
int figura[] = { 16    ,  16    ,  16    ,   16   ,   16   ,   16   ,   16   ,   16   ,   32   ,   32   ,   32   ,   16   ,   16   ,   16   ,   32   ,   32   ,   16   ,   32   ,   32   ,   32   ,   32   ,    32  ,    32  ,    32  ,   32   ,   32   ,   16   ,  32    ,   32   ,   16   ,   32   ,   16   ,   32   ,   32   ,   32   ,    32  ,   32   ,   32   ,  32    ,    32  ,   16   ,   16   ,     16  ,   16   ,    16  ,   16   ,    16   ,   32   ,    16};

int BPM = 130;
float tiempoSilencio = 1.0;
int duracionTotalNota = (60000 * 4) / BPM;


void setup() {
    pinMode( 6 , OUTPUT);
      Serial.begin(9600);
}


// tone( pin , nota , duracion)  ->  toca una nota durante X tiempo
// delay( duracion  )            -> duracion entre notas
// noTone( pin )                 -> deje de sonar la nota

void loop() {
  //CICLO  FOR
  for( int i = 0 ; i < length(nota,int)-1 ; i++ )
  {
    if( figura[i] >= 0 )
    {
        //figura es POSITIVA
          int duracionNota = ( duracionTotalNota / figura[i] )  ;
          tone( 6 , nota[i] , duracionNota * 0.9 ); //el 0.8  no son obligatorio
          delay( duracionNota );  //el 1.3  no son obligatorio
          noTone(6);
        //MSG( duracionTotalNota, figura[i] , duracionNota,  tiempoSilencio, duracionNota*0.8 , duracionNota*1.3 );
    }else{
        //figura es NEGATIVA
            int duracionNota = ( duracionTotalNota / (figura[i]*(-1)) )  ;
            tone( 6 , nota[i] , duracionNota * 0.9 );
              delay( duracionNota  );
              noTone(6);
          //MSG( duracionTotalNota, figura[i] , duracionNota,  tiempoSilencio, duracionNota*0.8 , duracionNota );
    }
    tone(6, 392);
  delay(462);
  noTone(6);

  tone(6, 392);
  delay(462);
  noTone(6);

  tone(6, 440);
  delay(462);
  noTone(6);

  tone(6, 392);
  delay(462);
  noTone(6);

  tone(6, 349);
  delay(462);
  noTone(6);

  tone(6, 392);
  delay(462);
  noTone(6);

  tone(6, 440);
  delay(462);
  noTone(6);

  tone(6, 440);
  delay(462);
  noTone(6);

  tone(6, 523);
  delay(231);
  noTone(6);

  tone(6, 523);
  delay(231);
  noTone(6);

  tone(6, 440);
  delay(231);
  noTone(6);

  tone(6, 392);
  delay(462);
  noTone(6);

  tone(6, 165);
  delay(462);
  noTone(6);

  tone(6, 196);
  delay(462);
  noTone(6);

  tone(6, 220);
  delay(231);
  noTone(6);

  tone(6, 247);
  delay(231);
  noTone(6);

  tone(6, 440);
  delay(462);
  noTone(6);

  tone(6, 392);
  delay(231);
  noTone(6);

  tone(6, 440);
  delay(231);
  noTone(6);

  tone(6, 494);
  delay(231);
  noTone(6);

  tone(6, 494);
  delay(231);
  noTone(6);

  tone(6, 440);
  delay(231);
  noTone(6);

  tone(6, 494);
  delay(231);
  noTone(6);

  tone(6, 523);
  delay(231);
  noTone(6);

  tone(6, 587);
  delay(231);
  noTone(6);

  tone(6, 659);
  delay(231);
  noTone(6);

  tone(6, 247);
  delay(462);
  noTone(6);

  tone(6, 220);
  delay(231);
  noTone(6);

  tone(6, 196);
  delay(231);
  noTone(6);

  tone(6, 220);
  delay(462);
  noTone(6);

  tone(6, 440);
  delay(231);
  noTone(6);

  tone(6, 440);
  delay(462);
  noTone(6);

  tone(6, 392);
  delay(231);
  noTone(6);

  tone(6, 440);
  delay(231);
  noTone(6);

  tone(6, 494);
  delay(231);
  noTone(6);

  tone(6, 523);
  delay(231);
  noTone(6);

  tone(6, 587);
  delay(231);
  noTone(6);

  tone(6, 494);
  delay(231);
  noTone(6);

  tone(6, 440);
  delay(231);
  noTone(6);

  tone(6, 392);
  delay(231);
  noTone(6);

  tone(6, 494);
  delay(346);
  noTone(6);

  tone(6, 659);
  delay(462);
  noTone(6);

  tone(6, 698);
  delay(462);
  noTone(6);

  tone(6, 659);
  delay(462);
  noTone(6);

  tone(6, 698);
  delay(462);
  noTone(6);

  tone(6, 784);
  delay(462);
  noTone(6);

  tone(6, 659);
  delay(462);
  noTone(6);

  tone(6, 392);
  delay(231);
  noTone(6);

  tone(6, 330);
  delay(462);
  noTone(6);
 }
}