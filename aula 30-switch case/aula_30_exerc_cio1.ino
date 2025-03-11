/*
Autor: Bianca 
Nome da programação:Aula 30- exercicio switch case
Descrição: fazer uma programação para analise da qualidade do ar
Data:06/03/25
*/

#define pinLedVerde 13
#define pinLedAmarelo 12
#define pinLedLaranja 11
#define pinLedAzul 10
#define pinLedVermelho 9
#define pinLedBranco 8 


void setup()
{
 Serial.begin (9600);
 pinMode (pinLedVerde,OUTPUT);
 pinMode (pinLedAmarelo,OUTPUT);
 pinMode (pinLedLaranja,OUTPUT);
 pinMode (pinLedAzul,OUTPUT);
 pinMode (pinLedVermelho,OUTPUT);
 pinMode (pinLedBranco,OUTPUT);
 int qualidadeAr = 0;

 switch (qualidadeAr)
  {
   case 0:
   digitalWrite(pinLedVerde,HIGH);
   Serial.println (" qualidade do ar esta pessima");
   break;
   
   case 1:
   digitalWrite(pinLedAmarelo,HIGH);
   Serial.println ("a qualidade do ar esta ruim");
   break;
   
   case 2:
   digitalWrite(pinLedLaranja,HIGH);
   Serial.println ("a qualidade do ar esta normal ");
   break;
   
   case 3:
   digitalWrite(pinLedAzul,HIGH);
   Serial.println ("a qualidade do ar esta boa");
   break;
   
   case 4:
   digitalWrite(pinLedVermelho,HIGH);
   Serial.println ("a qualidade do ar esta excelente");
   break;
    
   default:
   digitalWrite (pinLedBranco,HIGH);
   digitalWrite(pinLedVerde,LOW);
   digitalWrite(pinLedAmarelo,LOW);
   digitalWrite(pinLedLaranja,LOW);
   digitalWrite(pinLedAzul,LOW);
   digitalWrite(pinLedVermelho,LOW);
   Serial.println ("deu erro");
   break;
    
  }

}


void loop()
{
  
}