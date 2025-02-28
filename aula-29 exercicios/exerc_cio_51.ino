/*
Autor: Bianca Castro
Descrição: aula 29-Exercicios 
Data:27/02/25
*/
void setup()
{
 Serial.begin (9600);
 Serial.println ("Geovana");
 Serial.println ("Ajudante de cozinha");
 Serial.println ("Salario: 800");
 int salario = 800;
 int resultado = 0;
 if ( salario < 1000){
  }
 resultado = salario * 1.1;
 Serial.print (" o salario de Geovana agora eh: ");
  Serial.println(resultado);
}

void loop()
{
 
}