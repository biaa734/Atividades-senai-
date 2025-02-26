/*
Autor: Bianca Castro 
Nome da programação:exercicios
Descrição: formula calculo
Data:26/02/25
*/
void setup()
{
 Serial.begin (9600);
 float peso = 80;
 float altura = 1.80;
 float resultadoReal = 0;
 resultadoReal = peso / sq(altura);
 Serial.println (resultadoReal);
  
  if (resultadoReal < 18.5) {
  Serial.println ("voce esta abaixo do peso");
  }else if (resultadoReal >=18.5 && resultadoReal <=24.9){
  Serial.println ("voce esta no peso normal");
  }else if (resultadoReal>=25 && resultadoReal <=29.9){
  Serial.println ("voce esta em excesso de peso");
  }else if (resultadoReal >=30 && resultadoReal <=34.9){
  Serial.println ("voce esta na obesidade clase 1");
  }else if (resultadoReal >=35 && resultadoReal <=39.9){
  Serial.println ("voce esta na obesidade clase2");
  }else{
  Serial.println ("voce esta na obesidade clase 3");
}
}

void loop()
{
}
//.