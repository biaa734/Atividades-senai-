/*
Autor:Bianca Castro
descrição: Aula 26-exercicios 
data:24/02/25
*/


void setup()
{
int numeroA=600;
int resultado=0;

//exercicio 1 Remapeamento e constrain
Serial.begin (9600);
resultado =map (600,0,1023,0,100);
Serial.println (resultado);

resultado = constrain (resultado,20,80);
Serial.println (resultado);

//exercicio 2 incremento e decremento 
int algarismo = 0;
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);
algarismo ++;
Serial.println (algarismo);

int algarismoB=10;
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);
algarismoB--;
Serial.println (algarismoB);

//execicios 3 
int valor1=40;
int valor2=15;
float resultadoReal=0;
resultadoReal = ((float)valor1 + (float)valor2) /2;
Serial.println (resultadoReal);
}

void loop()
{
  
}