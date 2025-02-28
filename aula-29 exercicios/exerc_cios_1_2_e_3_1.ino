/*
Autor: Bianca Castro
Descrição: aula 29-Exercicios 
Data:27/02/25
*/

#define pinLedAzul 9
#define pinLedVermelho 10
#define pinLedLaranja 11
int temperatura=50 ;
float bateria = 15;

void setup()
{
 Serial.begin (9600);
 pinMode (pinLedAzul,OUTPUT);
 pinMode (pinLedVermelho,OUTPUT);
 pinMode (pinLedLaranja,OUTPUT);
 int numero=4;
 int resultadoReal=numero % 2;
  if (resultadoReal==0){
  digitalWrite (pinLedLaranja,HIGH);
  }
}
void loop()
{
  if (temperatura > 30)
  {
  digitalWrite (pinLedAzul,HIGH);
  }
  if (bateria < 20) 
  {
  digitalWrite (pinLedVermelho,HIGH);
  }
}
   
    