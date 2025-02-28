/*
Autor:Bianca Castro
Nome da programação: Estruturas de Decisão
Data:25/02/25
*/
void setup()
{
Serial.begin (9600);
int salario=400; 
int resultado=0;
if (salario>500){
Serial.println ("Voce nao tem direito ao aumento");
 }
  if (salario < 500){
 
 resultado=salario *1.3;
 Serial.print (" agora voce recebe:");
 Serial.println (resultado);
}
}
void loop()
{
  
}