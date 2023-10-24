#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <ESP8266WiFi.h>


#define BMP_SDA 4  // Define o pino SDA (D2 no ESP8266)
#define BMP_SCL 5  // Define o pino SCL (D1 no ESP8266)

Adafruit_BMP280 bmp;
const char* ssid = "Tamyres";
const char* password = "al1916ta";


void setup() {
  // Inicializa a comunicação serial
  Serial.begin(115200);
  Wire.begin(BMP_SDA, BMP_SCL);

  if (!bmp.begin(0x76)) {
    Serial.println("Não foi possível encontrar um sensor BMP280. Verifique as conexões!");
    while (1);
  }

  // Conecta-se à rede Wi-Fi
  WiFi.begin(ssid, password);
  
  Serial.print("Conectando à rede Wi-Fi");
  
  // Aguarda a conexão com a rede
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.println("Conectado à rede Wi-Fi");
}

void loop() {
  Serial.print("Temperatura = ");
  Serial.print(bmp.readTemperature() - 3);
  Serial.println(" *C");

  Serial.print("Pressão = ");
  Serial.print(bmp.readPressure() / 100.0F); // Dividido por 100 para converter para hPa
  Serial.println(" hPa");

  // Calcula a altitude com base na pressão padrão ao nível do mar (1013.25 hPa)
  float altitude = bmp.readAltitude(1013.25);
  Serial.print("Altitude = ");
  Serial.print(altitude);
  Serial.println(" metros");

  delay(1000); // Aguarda 1 segundo antes de ler novamente
}

