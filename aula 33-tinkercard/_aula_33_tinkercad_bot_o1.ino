/*
Autor: Bianca 
Nome da programação: aula 34- tinkercad botão
Descrição: fazer o Led acender usando o botão
Data: 11/03/25
*/

//EXERCICIO2
//digitalWrite (pinLed,HIGH);
//  delay (tempoLed);
// digitalWrite (pinLed,LOW);
//delay (tempoLed);

//EXERCICIO1
//if (estadoBotao)
//{
//digitalWrite (pinLed,HIGH);
//}
//else 
//digitalWrite (pinLed,LOW);

//EXERCICIO3
//bool estadoBotao = digitalRead (pinBotao);
//unsigned long tempoAtual=millis();
//if (estadoBotao)
//{
//if (tempoAtual-tempoInicial >=pausa)
//{
//tempoInicial=tempoAtual;
//led=!led;
//digitalWrite (pinLed,led);
//}

//static 

#define pinBotao 10 
#define pinLed 2
unsigned long tempoInicial=0;
unsigned long tempoAtual = 0;
unsigned long pausa=2000;
char led = 1;
//VARIAVEIS GLOBAIS

void setup()
{
  Serial.begin (9600);
  pinMode (pinLed,OUTPUT);
  pinMode (pinBotao,INPUT);
}

void loop()
{
 //READ-> LER
 //WRITE ->ESCREVER
  bool estadoBotao = digitalRead (pinBotao);
  unsigned long tempoAtual=millis();
  if (estadoBotao)
  {
    if (tempoAtual-tempoInicial >=pausa)
    {
      tempoInicial=tempoAtual;
      led=!led;
      digitalWrite (pinLed,led);
     }
  }
  
}

