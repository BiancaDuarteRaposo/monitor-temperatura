#include <OneWire.h>
#include <DallasTemperature.h>
#include "config.h"

//Instanciando o feed do Adafruit
AdafruitIO_Feed *termometro_digital = io.feed("termometro-digital");
//Instanciando a conexão com o sensor de temperatura através do pino digital D4
OneWire barramento(D4);
//Instanciando o sensor de temperatura
DallasTemperature sensor(&barramento);

void setup() {
  //Inicialização e conexão com o adafruit
  Serial.begin(115200);
  sensor.begin(); 
  io.connect();
  while(io.status() < AIO_CONNECTED) {
    delay(500);
  }
}


void loop() {
  //Iniciando o io do adafruit
  io.run();
  //Atualizando a temperatura do sensor
  sensor.requestTemperatures();
  //Capturando a temperatura do sensor
  float temperaturaCelsius = sensor.getTempCByIndex(0);
  //Escrevendo a temperatura no monitor serial
  Serial.println(temperaturaCelsius);
  //Enviando a temperatura para o feed do adafruit
  termometro_digital->save(temperaturaCelsius);
  //Atualiza a cada 5 segundos devido ao trottle limit da conta gratuita do adafruit
  delay(5000);
}
