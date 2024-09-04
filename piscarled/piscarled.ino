// Definir os pinos conectados ao LED RGB
const int ledRed = D1;
const int ledGreen = D3;
const int ledBlue = D2;

void setup() {
  // Inicializar os pinos como saídas
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  // Cores de exemplo: vermelho, verde, azul, branco, amarelo, roxo
  setColor(255, 0, 0);   // Vermelho
  delay(1000);
  setColor(0, 255, 0);   // Verde
  delay(1000);
  setColor(0, 0, 255);   // Azul
  delay(1000);
  setColor(255, 255, 255); // Branco
  delay(1000);
  setColor(255, 255, 0);   // Amarelo
  delay(1000);
  setColor(128, 0, 128);   // Roxo
  delay(1000);
}

// Função para definir a cor do LED RGB
void setColor(int red, int green, int blue) {
  analogWrite(ledRed, red);
  analogWrite(ledGreen, green);
  analogWrite(ledBlue, blue);
}
