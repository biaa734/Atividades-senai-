/*
Autor: Bianca Castro
Descrição: aula 29-Exercicios 
Data:27/02/25
*/
void setup()
{
 Serial.begin (9600);
 int numero= -4;
  
 if(numero > 0){
 Serial.println ("Positivo");
 }
  if (numero < 0) {
  Serial.println ("Negativo");
  }
}

void loop()
{
  
}