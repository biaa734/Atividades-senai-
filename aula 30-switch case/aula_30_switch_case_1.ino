/*
Autor: Bianca 
Nome da programação: switch case
Data:06/03/2025
*/
#define pinLedVermelho 13
#define pinLedAmarelo 12
#define pinLedVerde 11

void setup()
{
  pinMode (pinLedVermelho,OUTPUT);
  pinMode (pinLedAmarelo,OUTPUT);
  pinMode (pinLedVerde,OUTPUT);
  int escolha = 3;
  switch (escolha)
  {
   case 0:
   digitalWrite(pinLedVermelho,HIGH);
   break;
   
   case 1:
   digitalWrite(pinLedAmarelo,HIGH);
   break;
   
   case 2:
   digitalWrite(pinLedVerde,HIGH);
   break;
    
   default:
   digitalWrite(pinLedVermelho,LOW);
   digitalWrite(pinLedAmarelo,LOW);
   digitalWrite(pinLedVerde,LOW);
   break;
    
  }
}

void loop()
{
  
}