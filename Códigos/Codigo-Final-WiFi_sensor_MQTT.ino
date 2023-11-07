#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

#define BMP_SDA 4  // Define o pino SDA (D2 no ESP8266)
#define BMP_SCL 5  // Define o pino SCL (D1 no ESP8266)

Adafruit_BMP280 bmp;

// Substitua com suas informações de rede WiFi
const char* ssid = "Tamyres";
const char* password = "al1916ta";

// Substitua com as informações do seu Broker MQTT
const char* mqtt_server = "192.168.89.101";  // Endereço IP ou URL do seu Broker
const int mqtt_port = 1883;                // Porta MQTT padrão
const char* mqtt_user = "user";
const char* mqtt_password = "123456";

// Crie um cliente WiFi e um cliente MQTT
WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Wire.begin(BMP_SDA, BMP_SCL);

  if (!bmp.begin(0x76)) {
    while (1);
  }

  // Conecte-se à rede WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
  }

  // Configure o servidor MQTT
  client.setServer(mqtt_server, mqtt_port);
}

void loop() {
  // Mantenha a conexão MQTT ativa
  if (!client.connected()) {
    reconnect();
  }
  
  // Realize a leitura do sensor BMP280
  float temperatura = bmp.readTemperature() - 3;
  float pressao = bmp.readPressure() / 100.0F; 
  float altitude = bmp.readAltitude(1013.25);

  // Envie os dados lidos para o tópico MQTT
  String mensagem = String(temperatura) + " "+ String(pressao) + " " + String(altitude);
  client.publish("tem", mensagem.c_str());

  delay(250);  // Intervalo entre envios de mensagens
}

void reconnect() {
  // Reconecte-se ao Broker MQTT
  while (!client.connected()) {
    if (client.connect("ESP8266Client", mqtt_user, mqtt_password)) {
      // Envie o IP do ESP8266 ao se conectar
      String ip = WiFi.localIP().toString();
      client.publish("ip", ip.c_str());
    } else {
      delay(1000);
    }
  }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
