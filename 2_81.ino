
void setup() {
    
    Serial.begin(9600);
}


  void loop() {
    
    int num1 = 10;  
    int num2 = 3;   

    
    if (Multiplo(num1, num2)) {
        Serial.print(num1);
        Serial.print(" Si es multiplo de ");
        Serial.println(num2);
    } else {
        Serial.print(num1);
        Serial.print(" No es multiplo de ");
        Serial.println(num2);
    }

    
    delay(2000);
}


bool Multiplo(int a, int b) {
    
    return (a % b == 0);
}
