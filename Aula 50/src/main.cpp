#include <Arduino.h>
#define pinLed 2
#define pinBotao 5

void setup()
{
  delay (2000); //necessario pois se iniciar com o boot pressionado entra no modo upload e nao inicia o programa 
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);

  while (digitalRead(pinBotao) == 0)
  {

    digitalWrite(pinLed, HIGH);
    delay(200);
    digitalWrite(pinLed, LOW);
    delay(200);
  }
}

void loop()
{
}