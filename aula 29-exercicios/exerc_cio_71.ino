/*
Autor:Bianca Castro
Nome da programação: Estruturas de Decisão
Data:25/02/25
*/

void setup()
{
  Serial.begin (9600);
  int numeroA= 20;
  int numeroB= 50;
  
  
  if (numeroA > numeroB){
  Serial.println (" numero maior eh:");
  Serial.print (numeroA); 
  }else{
  Serial.println ("numero maior eh:");
  Serial.print (numeroB);
  }
}

void loop()
{
  
}