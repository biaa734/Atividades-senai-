#include <Arduino.h>

#define pinLed 2
#define pinBotao 5

// PROTOTIPOS DAS FUNÇÕES
void ligaLed(int);
void desligarLed(int);
void piscarLed(int, unsigned long);
int somaDeDoisNumeros(int, int);

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);
  Serial.print(9600);
}

void loop()
{
  piscarLed(2, 100);
  int resultadoDaSoma = somaDeDoisNumeros(4, 8);
  Serial.println(resultadoDaSoma);
}

void ligaLed(int pin) // criamos função  com o tipo  void porque ele não retorna nenhum parametro.
{
  digitalWrite(pin, HIGH); // o pin define o nome da variavel dentro da função. 
}

void desligarLed(int pin) // usamos int porque queremos receber numeros inteiros. 
{
  digitalWrite(pin, LOW);
}

void piscarLed(int pin, unsigned long tempo) // usamos o unsigned long para poder amazenar o tempo.
{
  ligaLed(pin);
  delay(tempo);
  desligarLed(pin);
  delay(tempo);
}

int somaDeDoisNumeros(int numeroA, int numeroB) // criamos função com o tipo int porque queremos que nos retorna numeros inteiros. 
{
  int resultado = numeroA + numeroB;
  return resultado; // retornar o resultado da conta.
}