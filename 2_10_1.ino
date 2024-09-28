#define ENTRADA 2
#define SALIDA 4

void setup() 
{
    configurarPines();
}

void loop() 
{
    int estado = digitalRead(ENTRADA);

    if (estado == HIGH) {
        digitalWrite(SALIDA, HIGH);
    } else {
        digitalWrite(SALIDA, LOW);
    }
}


void configurarPines() {
    pinMode(ENTRADA, INPUT);
    pinMode(SALIDA, OUTPUT);
}
