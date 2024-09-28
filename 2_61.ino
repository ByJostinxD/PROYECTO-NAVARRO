#define length(v,tipo) sizeof(v)/sizeof(tipo)

void setup() 
	{
    int pines[] = {2, 4, 7, 8}; 
    int size = sizeof(pines) / sizeof(pines[0]);

    for (int i = 0; i < size; ++i) 
    {
        pinMode(pines[i], OUTPUT); 
    }

   
    activarPines(pines, size);
}

void loop() 
{
    
}


void activarPines(int pines[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        digitalWrite(pines[i], HIGH);
    }
}
