/*
Autor:Bianca Castro
Nome da programação: Estruturas de Decisão
Data:25/02/25
*/
//operadores de comparação
//=atribuição, salvar valor na variavel
// == verifica se dois valores são iguais
// != verifica se dois valores são diferentes
//<  verifica se é menor
//>  verifica se é maior 
// <= verifica se é menor ou igual
//>= verifica se é maior ou igual
void setup()
{
  Serial.begin (9600);
  
  int temperatura= 25;
  
  // se temperatura for maior que 25
 /* if(temperatura >= 25) { //se
  Serial.println ("Quente pra caramba");
  
  }else { // se não
  Serial.println ("confortavelzinho")
  }*/
  
  if (temperatura > 30) {
  Serial.println ("Partiu praia");

  }else if (temperatura <=30 && temperatura >24){
  Serial.println ("ta gostosinho"); 
  
 (temperatura <=30 && temperatura >24){
  Serial.println ("ta gostosinho"); 
  }else{
  Serial.println ("ta friozinho");
  }
}

void loop()
{
  
}