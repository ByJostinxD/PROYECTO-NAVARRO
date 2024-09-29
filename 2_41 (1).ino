#define PIR 7
#define LED 4

void setup() 
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
    pinMode(PIR, INPUT);
}

void loop()
{
    verificarMovimiento();
    delay(500);
}



void verificarMovimiento() 
{
    int movimiento = digitalRead(PIR);

    if (movimiento == HIGH) {
        encenderLuz();
    } else {
        apagarLuz();
    }
}

void encenderLuz() 
{
    Serial.println("Se detecto movimiento! Luz encendida");
    digitalWrite(LED, HIGH);
}

void apagarLuz() 
{
    Serial.println("No se detecto movimiento. Luz apagada.");
    digitalWrite(LED, LOW);
}