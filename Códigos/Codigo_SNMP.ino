#include <ESP8266WiFi.h>
#include <SNMP.h>

const char *ssid = "tamyres";
const char *password = "al1916ta";

// Defina suas próprias informações SNMP
const char *community = "public";  // Comunidade SNMP (substitua pela sua)
const int snmpPort = 161;          // Porta SNMP padrão

// Variáveis SNMP simuladas
SNMPVar analogValue("analogValue", 0);

void setup() {
  Serial.begin(115200);
  delay(10);

  // Conecte-se à sua rede Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Conectando ao WiFi...");
  }
  Serial.println("Conectado ao WiFi");

  // Inicialize a biblioteca SNMP
  SNMP.begin(community, snmpPort);

  // Registre as variáveis SNMP
  SNMP.registerVariable(analogValue);
}

void loop() {
  // Lê um valor analógico simulado (0-1023)
  int value = analogRead(A0);
  analogValue = value;

  // Processa solicitações SNMP
  SNMP.update();
}
