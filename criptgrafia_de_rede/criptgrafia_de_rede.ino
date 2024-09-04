#include <ESP8266WiFi.h>

void setup() {

  Serial.begin(9600);
  Serial.println("Iniciando");
  delay(4000);
  Serial.println("Procurando redes..."); 
  int qtde_redes = WiFi.scanNetworks();
  Serial.println("Redes encontradas:"); 
  for (int i = 0; i < qtde_redes; i++) {

    Serial.print("Nome da rede....: "); 
    Serial.println(WiFi.SSID(i));
    Serial.print("Potencia do Sinal (dBm): ");
    Serial.println(WiFi.RSSI(i));
    Serial.print("Tipo de criptografia...: ");
    String cripto;
    switch(WiFi.encryptionType(i)){
      case 2: cripto = "TKIP (WPA)"; break;
      case 4: cripto = "CCMP (WPA)"; break;
      case 5: cripto = "WEB"; break;
      case 7: cripto = "Nenhuma"; break;
      case 8: cripto = "AUTO"; break;
    }
    Serial.println(cripto);
    Serial.println("--------------------------");
  }
}

void loop(){

}