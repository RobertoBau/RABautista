int ledPin = 9; 				// Pin controlado por PWM 
void setup(){} 
void loop() { 
   for (int i=0; i<=255; i++){ 
      analogWrite(ledPin, i); 	// Establece el brillo a i 
      delay(100); 				// Pausa de 100 ms 
   } 
   for (int i=255; i>=0; i--) { 
      analogWrite(ledPin, i); 
      delay(100); 
   } 
}