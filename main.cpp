#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Bounce2.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

//! TERMINEI ATE A 8

//* INSTANCIAS
Bounce botao1 = Bounce();
Bounce botao2 = Bounce();
Bounce botao3 = Bounce();

// LEDS
#define pinLedBranco 18
#define pinLedVermelho 19
#define pinLedAmarelo 23
#define pinLedVerde 2

// BOTÕES
#define pinBotao1 15
#define pinBotao2 4
#define pinBotao3 5
void setup()
{
  lcd.init();
  lcd.backlight();

  pinMode(pinLedBranco, OUTPUT);
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);

  botao1.attach(pinBotao1, INPUT_PULLUP);
  botao2.attach(pinBotao2, INPUT_PULLUP);
  botao3.attach(pinBotao3, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop()
{
  botao1.update();
  botao2.update();
  botao3.update();

  static int contagem = 0;
  static bool modoSelecao = 0;

  static int intensidadeLedBranco = 0;
  static int intensidadeLedVermelho = 0;
  static int intensidadeLedAmarelo = 0;
  static int intensidadeLedVerde = 0;

  if (botao1.fell())
  {
    if (modoSelecao == 1)
    {
      contagem++;
      if (contagem > 3)
        contagem = 0;
      Serial.println(contagem);
    }
    else
    {
      //! INTENSIDADE LED BRANCO
      if (contagem == 0)
      {
        intensidadeLedBranco += 10;
        if (intensidadeLedBranco > 100)
        {
          intensidadeLedBranco = 100;
        }
        Serial.println(intensidadeLedBranco);
      }
      //! INTENSIDADE LED VERMELHO
      if (contagem == 1)
      {
        intensidadeLedVermelho += 10;
        if (intensidadeLedVermelho > 100)
        {
          intensidadeLedVermelho = 100;
        }
        Serial.println(intensidadeLedVermelho);
      }
      //! INTENSIDADE LED AMARELO
      if (contagem == 2)
      {
        intensidadeLedAmarelo += 10;
        if (intensidadeLedAmarelo > 100)
        {
          intensidadeLedAmarelo = 100;
        }
        Serial.println(intensidadeLedAmarelo);
      }
      //! INTENSIDADE LED VERDE
      if (contagem == 3)
      {
        intensidadeLedVerde += 10;
        if (intensidadeLedVerde > 100)
        {
          intensidadeLedVerde = 100;
        }
        Serial.println(intensidadeLedVerde);
      }
    }
  }

  //*BOTAO 2
  if (botao2.fell())
  {
    if (modoSelecao == 1)
    {
      contagem--;
      if (contagem < 0)
        contagem = 3;
      Serial.println(contagem);
    }
     else
    {
     //! INTENSIDADE LED BRANCO
      if (contagem == 0)
      {
        intensidadeLedBranco -= 10;
        if (intensidadeLedBranco < 0)
        {
          intensidadeLedBranco = 0;
        }
        Serial.println(intensidadeLedBranco);
      }
      //! INTENSIDADE LED VERMELHO
      if (contagem == 1)
      {
        intensidadeLedVermelho -= 10;
        if (intensidadeLedVermelho < 0)
        {
          intensidadeLedVermelho = 0;
        }
        Serial.println(intensidadeLedVermelho);
      }
      //! INTENSIDADE LED AMARELO 
      if (contagem == 2)
      {
        intensidadeLedAmarelo -= 10;
        if (intensidadeLedAmarelo < 0)
        {
          intensidadeLedAmarelo = 0;
        }
        Serial.println(intensidadeLedAmarelo);
      }
      //! INTENSIDADE LED VERDE
      if (contagem == 3)
      {
        intensidadeLedVerde -= 10;
        if (intensidadeLedVerde < 0)
        {
          intensidadeLedVerde = 0;
        }
        Serial.println(intensidadeLedVerde);
      }
    }
  }

  // BOTAO 3
  if (botao3.fell())
  {
    modoSelecao = !modoSelecao;
    if (modoSelecao == 0)
    {
      Serial.println("FALSE");
    }
    if (modoSelecao == 1)
    {
      Serial.println("TRUE");
    }
  }
}