# Termômetro de Freezer Inteligente
Este projeto contém o desenvolvimento do código de um termometro inteligente que se comunica com o adafruit.

## Pré-requisitos 
### Componentes eletrônicos
Para roda-lo você precisará dos seguintes componentes:
- Protoboard 400 Pontos 
- ESP8266
- Resistor 4,7k
- Sensor de temperatura DS18B20

### Desenho tecnico:
![image](https://github.com/BiancaDuarteRaposo/monitor-temperatura/assets/81635323/01e6bf57-a03f-4752-9ba6-d4c6aca71768)


### Configurações necessárias de ambiente de software:
- Instalar o Arduino IDE: https://www.arduino.cc/en/software
- Instalar o driver do ESP8266: https://s3-sa-east-1.amazonaws.com/robocore-tutoriais/163/CP210x_Windows_Drivers.zip

### Configurações para rodar o projeto:
- Configurar o feed na linha `AdafruitIO_Feed *termometro_digital = io.feed("nome-do-feed");`
- Configurar o arquivo config.h com seu usuario e chave de api do adafruit:
```
#define IO_USERNAME "" //usuario adafruit
#define IO_KEY "" //chave api adafruit
```
- Configurar o SSID e senha da rede no qual você está conectado.
```
#define WIFI_SSID "" //nome da rede wifi
#define WIFI_PASS "" //senha da rede wifi
```

### Dashboard
É possível visualizar as informações enviadas ao AdaFruit através de um dashboard através do `index.html`, é necessário apenas configurar a API consumida via JS dentro do arquivo.
![image](https://github.com/BiancaDuarteRaposo/monitor-temperatura/assets/81635323/2df4256a-0b9c-496c-a6e6-fc094e050386)

