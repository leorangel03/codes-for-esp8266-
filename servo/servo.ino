#include <Servo.h>
Servo myServo;  // Cria um objeto servo
int ledPin = D2; // O LED está conectado à porta D1


void setup() {
  myServo.attach(D1);  // Anexa o servo à porta D1
  pinMode (ledPin, OUTPUT);  // Anexa o servo à porta D1
}

void loop() {
  myServo.write(0);   // Move o servo para 0 graus
  digitalWrite(ledPin, LOW);
  delay(500);        // Espera 1 segundo
  
  myServo.write(180); // Move o servo para 180 graus
  digitalWrite(ledPin, HIGH);
  delay(500);        // Espera 1 segundo


}