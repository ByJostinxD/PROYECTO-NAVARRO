#define length(v, tipo) (sizeof(v) / sizeof(tipo))

void setup() {
    Serial.begin(9600);
  
    int vector[] = {10, 4, 9, 14, 5, 2};
  
    int N = length(vector, int);
  
    ordenarDescendente(vector, N);
  
    for (int i = 0; i < N; i++) 
    {
        Serial.print(vector[i]);
        Serial.print(' ');
    }
    Serial.println();
}

void loop() 
{
}


void ordenarDescendente(int vector[], int N) 
{
    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = 0; j < N - i - 1; j++) 
        {
            if (vector[j] < vector[j + 1]) 
            {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}
