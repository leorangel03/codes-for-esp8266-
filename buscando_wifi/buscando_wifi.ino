#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando");
  delay(4000);
  Serial.println("Procurando redes...");
  int qtde_redes = WiFi.scanNetworks();
  Serial.println("Redes Encontradas:");
  for (int i = 0; i < qtde_redes; i++) {
    Serial.println("Nome da rede.........: ");
    Serial.println(WiFi.SSID(i));
    Serial.println("Potência do Sinal (dBn): ");
    Serial.println(WiFi.RSSI(i));
    Serial.println("---------------------");
  }
}

void loop() {

  
}
