#include <Arduino.h>

#define pinLed 2
#define pinBotao 5

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  bool estadoAtualBotao = digitalRead(pinBotao);
  static bool estadoAnterior = 1;
  static bool ultimaAcao = 1;

  static unsigned long tempoUltimaAlteracao = 0;
  unsigned long tempoAtual = millis();
  const unsigned long tempoFiltro = 50;

  static bool estadoLed = 0; 

  //! INICIA O TRATAMENTO DE RUIDO DO BOTAO

  //* Detecta mudança no estado do botão
  if (estadoAtualBotao != estadoAnterior)
  {
    tempoUltimaAlteracao = tempoAtual; //* Atualiza o tempo da ultima mudança
  }
  //* Verifica se o novo estado se manteve estavel por tempo suficiente
  if (tempoAtual - tempoUltimaAlteracao > tempoFiltro)
  {
    //* Verifica se ainda nao processamos essa nova acao
    if (estadoAtualBotao != ultimaAcao)
    {
      ultimaAcao = estadoAtualBotao; //* Atualiza o estado ja processado para evitar ações repetidas

      //* Se o  botao foi pressionado (nivel logico LOW)
      if (!estadoAtualBotao)
      {
        estadoLed = !estadoLed;
        digitalWrite (pinLed,estadoLed);
      
      }
      //* Se o botao foi solto (nivel ;ogico,HIGH), nenhuma acao por enquanto
      else
      {
      }
    }
  }
//* Atualiza o estado anterior para proxima iteracao
estadoAnterior = estadoAtualBotao;
}
//! FINAL DO TRATAMENTO DO BOTAO
