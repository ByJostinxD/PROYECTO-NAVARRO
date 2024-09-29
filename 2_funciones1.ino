#define TRIG 5
#define ECHO 6

void setup() 
{
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() 
{
  int distancias = Distancia();
  Serial.print("Distancia actual: ");
  Serial.print(distancias);
  Serial.println(" cm");
  delay(500);
}

int Distancia() 
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duracion = pulseIn(ECHO, HIGH);
  return duracion * 0.034 / 2;
}