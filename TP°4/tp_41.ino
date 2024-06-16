int temperatura;
#define LED_R 3
#define LED_G 5
#define LED_B 6
#define TMP A0
#define LDR A1

#define MSG_LUZ "El nivel de luz actual es : "
#define MSG_TEM "y la temperatura actual : "

#define TMP_RED 90
#define TMP_BLUE 18
#define GREEN_LOW 18
#define GREEN_UP 90

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(TMP, INPUT);
  pinMode(LDR, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int x = analogRead(LDR);
  int luz = map(x, 1, 310, 100, 0);
  
  Serial.print(MSG_LUZ);
  Serial.println(luz);
  
  int y = analogRead(TMP);
  float volt = y * 5.0 / 1024;
  float tempera = (volt - 0.5) * 100;
  temperatura = int(tempera);
  
  Serial.print(MSG_TEM);
  Serial.print(temperatura);
  Serial.println(" ºC");
  
    if (luz < 30 || luz > 70) 
    {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
    } else {
    
    digitalWrite(LED_R, tempera > TMP_RED ? HIGH : LOW);
    digitalWrite(LED_G, (tempera >= GREEN_LOW && tempera <= GREEN_UP) ? HIGH : LOW);
    digitalWrite(LED_B, tempera < TMP_BLUE ? HIGH : LOW);
  }
}