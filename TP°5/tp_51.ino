int nombre=5;
#define LED_R 11
#define LED_G 12
#define LED_B 13
#define PIEZO 8
#define SENSOR 6
#define ECHO 4
#define TRIG 5

const float UMBRAL = 100.0;

#define MSG(TITULO, TEXTO) Serial.print(TITULO); Serial.println(TEXTO);
#define ALERTA "ALERTA: INTRUSO"
#define DISTANCIA "Dist: "

void setup() {
  pinMode(SENSOR, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(PIEZO, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  
  Serial.begin(9600); 
}

void loop() {
  bool mov = digitalRead(SENSOR);
  
  if (mov == HIGH) {
  
    MSG(ALERTA, "INTRUSO");
    digitalWrite(PIEZO, HIGH);
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_B, LOW);
  } else {
    digitalWrite(PIEZO, LOW);
    digitalWrite(LED_G, LOW);
  }

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  float duracion = pulseIn(ECHO, HIGH);
  float distancia = duracion / 52.0;

  MSG(DISTANCIA, distancia);
  
  if (distancia < UMBRAL) {

    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
    if (mov == HIGH) {
      tone(PIEZO, 1000); 
    } else {
      tone(PIEZO, 500); 
    }
  } else {
    noTone(PIEZO);
  }
  delay(100);
}

void setColor(int r, int g, int b) {
  analogWrite(LED_R, r);
  analogWrite(LED_G, g);
  analogWrite(LED_B, b);
}