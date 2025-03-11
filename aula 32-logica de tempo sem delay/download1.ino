/*
 Autor:Bianca 
 Nome da programação: Aula 32- logica de tempo sem delay 
 Descrição: fazer o Led acender e apagar sem o uso do delay
 Data:07/03/25
*/

#define pinLedAzul 9 

unsigned long tempoInicial= 0;
bool estadoLed = 0;

void setup()
{
 pinMode (pinLedAzul,OUTPUT);
}

void loop()
{
  unsigned long tempoAtual=millis ();
  if (tempoAtual-tempoInicial>=1000)
  {
  	if (estadoLed)
  	{
   		digitalWrite (pinLedAzul,LOW);
        estadoLed=0;
  	}
  	else 
  	{
      digitalWrite (pinLedAzul,HIGH);
      estadoLed=1;
  	}
    tempoInicial=tempoAtual;
  }
}