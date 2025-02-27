/*
Autor: Bianca Castro 
Nome do programa: pisca-pisca 
Data: 19/02/25
Descrição: Meu primeiro programa em c
*/

#define pinLedAzul 8
#define tempoLigado 200
#define tempoDesligado 500

void setup() //Inicio de Arduino e roda uma vez 
{
  pinMode(pinLedAzul,OUTPUT); // Define o pino do led como saida 
}

void loop() // Roda em circulo o codigo abaixo 
{
  digitalWrite (pinLedAzul,HIGH); // liga led
  delay (tempoLigado) ; // da uma pausa 
  digitalWrite (pinLedAzul,LOW); // desliga led 
  delay (tempoDesligado) ; // da uma pausa
 }