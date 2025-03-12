/*
Autor:Bianca 
Nome da Programação: Continuação da aula anterior 
Descrição: Quando apertar o botão o Led tem que acender
e quando apertar o botão de novo o Led deve apagar 
Data: 12/03/25
*/
#define pinBotao 10
# define pinLed 4
int estadoLed = 0;
int estadoAnterior = 0; 
int estadoBotao = 0;      

void setup()
{
  pinMode (pinBotao,INPUT);
  pinMode (pinLed,OUTPUT);
}

void loop()
{
  int estadoAtual = digitalRead(pinBotao);
    
  if (estadoAtual == 1 && estadoAnterior == 0){
    
    estadoLed = !estadoLed;
    digitalWrite(pinLed, estadoLed);
  }
  estadoAnterior=estadoAtual;
}


