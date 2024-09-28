void setup() {
    Serial.begin(9600);

    int ladosDado = 6;
    int resultado = lanzarDado(ladosDado);

    Serial.print("Lanzaste un dado de ");
    Serial.print(ladosDado);
    Serial.print(" lados y obtuviste: ");
    Serial.println(resultado);
}

void loop() 
{

}

int lanzarDado(int lados) 
{
    randomSeed(analogRead(0));
  
    return random(1, lados + 1); 
}