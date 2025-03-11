/*
Autor: Bianca 
Nome da programação: Semaforo
Descrição:Fazer um semaforo sem o uso do delay  
Data: 10/03/25
*/

#define pinLedVerde 13
#define pinLedAmarelo 12
#define pinLedVermelho 11
unsigned long tempoInicial=0;
unsigned long tempoVerde= 4000;
unsigned long tempoAmarelo= 2000;
unsigned long tempoVermelho=6000;
char faseSemaforo=0;

void setup()
{
 pinMode (pinLedVerde,OUTPUT);
 pinMode (pinLedAmarelo,OUTPUT);
 pinMode (pinLedVermelho,OUTPUT);
}

void loop()
{
 unsigned long tempoAtual=millis();
  if (faseSemaforo == 0)
  {
    digitalWrite (pinLedVermelho,HIGH);
    digitalWrite (pinLedAmarelo,LOW);
    digitalWrite (pinLedVerde,LOW);
    
    if (tempoAtual-tempoInicial >=tempoVermelho)
    {
      faseSemaforo=1;
      tempoInicial=tempoAtual;
    }
  }

  
  else if (faseSemaforo == 1)
  {
   digitalWrite (pinLedVerde,HIGH);
   digitalWrite (pinLedAmarelo,LOW);
   digitalWrite (pinLedVermelho,LOW);
  if (tempoAtual-tempoInicial >=tempoVerde)
  {
   faseSemaforo =2;
  tempoInicial=tempoAtual;
  }
    }
    else if (faseSemaforo==2)
    {
    digitalWrite (pinLedAmarelo,HIGH);
    digitalWrite (pinLedVermelho,LOW);
    digitalWrite (pinLedVerde,LOW);
    if (tempoAtual-tempoInicial >= tempoAmarelo)
    {
   faseSemaforo = 0;
 tempoInicial=tempoAtual; 
}
 
}
}