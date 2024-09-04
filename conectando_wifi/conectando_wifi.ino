#include <ESP8266WiFi.h>

int tentativas = 50;
char ssid[] = "Faculdade Impacta v2";
char senha[] = "impacta2021"; 

void setup() {

  Serial.begin(9600);
  Serial.println("Iniciando");
  WiFi.begin(ssid, senha);
  Serial.println("Conectando..."); 
  int qtde_redes = WiFi.scanNetworks();
  
  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
    if (tentativas == 0){
      Serial.println();
      Serial.println("TIME-OUT | VERIFIQUE AS CONFIGURACOES E TENTE NOVAMENTE");
      while(true);
    }
  }
  Serial.println("CONECTADO!");
  Serial.print("IP.............");
  Serial.println(WiFi.localIP());
  Serial.print("MASCARA DE REDE");
  Serial.println(WiFi.subnetMask());
  Serial.print("GATEWAY........");
  Serial.println(WiFi.gatewayIP());
}

void loop(){

}