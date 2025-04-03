#include <Arduino.h>

#define pinLed 2
#define pinBotao 5

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);
  Serial.begin(9600);

  for (int tabuada = 0; tabuada < 11; tabuada++)
  {
    for (int numero = 0; numero < 11; numero++)
    {
      Serial.printf ("%d x %d =%d \n\r",tabuada,numero,numero*tabuada);
    }
  }
}

void loop()
{
}