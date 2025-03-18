/*
Autor: Bianca
Nome da programação: aula 37 - exercicio 
Descrição: fazer ir de 0 a 100%
Data:14/03/25
*/

//int valor=analogRead (A0);
//int resultado = map (valor,0,1023,0,100); // Serial.println (valor / 10.23);
//Serial.println (resultado);

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  int valor=analogRead (A0);

  if (valor <= 200)
  {
  Serial.println ("Muito Frio");
  }
  if (valor  >= 200 && valor <= 400)
  {
  Serial.println (" Frio");
  }
  if (valor >= 400 && valor <= 600 )
  {
  Serial.println (" Normal");
  }
   if (valor >= 600 && valor <=800)
  {
  Serial.println (" Quente");
  }
 if (valor >= 800 && valor <=1000)
  {
  Serial.println (" Muito Quente");
  }
}


