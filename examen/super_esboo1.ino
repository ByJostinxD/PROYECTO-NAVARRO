
void setup()
{
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(4, INPUT);
  pinMode(3, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  int objeto = analogRead(A0);
  
  int objetivo = map ( objeto , 0 , 1023 , 50 , 200);
  
  digitalWrite(5, HIGH);
  delayMicroseconds(5);
  digitalWrite(5, LOW);
  
  float duracion = pulseIn(4, HIGH);
  float distancia = duracion / 57.6;
  int distan = map(distancia, 2, 300, 20, 330);
  
  int V = (objetivo-distan);
  
  if (distancia <= objetivo){
    
    digitalWrite(3, HIGH);
    delay(V);
    
  	}
  
  	if (distancia >= objetivo)
    {
   	 digitalWrite(3, HIGH);
   	 delay(V);
   }
  
Serial.print("objetivo: ");
Serial.print(objetivo);
Serial.println("cm");
    
Serial.print("Distancia: ");
Serial.print(distan);
Serial.println("cm");
  
Serial.print("Velocidad: ");
Serial.print(V);
Serial.println("ms");
}
