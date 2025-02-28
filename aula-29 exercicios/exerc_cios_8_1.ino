/*
Autor: Bianca Castro
Descrição: aula 29-Exercicios 
Data:27/02/25
*/
void setup()
{
 Serial.begin (9600);
 int nota1= 10;
 int nota2= 6;
 int nota3= 7;
 int nota4= 5;
 int resultado =0;
 
  resultado= (nota1 + nota2 + nota3 + nota4) /4;
  
  if(resultado>=7)
  	{
  	Serial.println ("APROVADO");
  	}
  else if (resultado>=5 && resultado<= 7) 
  	{
  	Serial.println ("RECUPERAÇÃO");
  	}
  else
  {
  Serial.println ("REPROVADO");
  }
}


void loop()
{
  
}