#define LED_R 3 
#define LED_G 6
#define LED_B 5



void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_G, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  for ( int y = 0 ; y <= 255 ; y+= 1){
  for ( int x = 0 ; x <= 255 ; x+= 1){
  for ( int z = 0 ; z <= 255 ; z+= 1){
    
    analogWrite( LED_R ,  x  );
  	analogWrite( LED_G ,  y  );
    analogWrite( LED_B ,  z  );
  	delay(200);
    
   }
  }
 }  
}