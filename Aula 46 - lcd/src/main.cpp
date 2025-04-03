#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

byte cadeadinho[] = {
    B01110,
    B10001,
    B10001,
    B11111,
    B11011,
    B11011,
    B11111,
    B00000};

byte cadeadinhoFechado[] = {
    B01110,
    B00001,
    B00001,
    B11111,
    B11011,
    B11011,
    B11111,
    B00000};

byte bichinhoComBoquinha[] = {
    B00000,
    B11111,
    B10101,
    B11111,
    B11011,
    B01110,
    B01010,
    B11011};

LiquidCrystal_I2C lcd(0x27, 20, 4);
#define pinLed 2
#define pinBotao 5
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.createChar(0, cadeadinho);
  lcd.createChar(1, cadeadinhoFechado);
  lcd.createChar(3, bichinhoComBoquinha);
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);

  // desenho casa
  lcd.setCursor(0, 2);
  lcd.print("_______");
  lcd.setCursor(0, 3);
  lcd.print("|");
  lcd.setCursor(2, 3);
  lcd.print("|__|");
}

void loop()
{
  static bool estadoLed = 0;
  static bool estadoAnterior = 1;
  static bool estadoBotao = 0;
  static bool ultimaAcao = 1;

  static unsigned long tempoUltimaAlteracao = 0;
  unsigned long tempoAtual = millis();
  const unsigned long tempoFiltro = 50;
  bool estadoAtual = digitalRead(pinBotao);

  static int contagem = 0;
  if (estadoAtual != estadoAnterior)
  {
    tempoUltimaAlteracao = tempoAtual;
  }
  if (tempoAtual - tempoUltimaAlteracao > tempoFiltro)
  {

    if (estadoAtual != ultimaAcao)
    {

      ultimaAcao = estadoAtual;
      if (!estadoAtual)
      {
        estadoLed = !estadoLed;
        digitalWrite(pinLed, estadoLed);

        lcd.setCursor(0, 0);
        lcd.print(" Desbloqueado ");

        lcd.setCursor(16, 0);
        lcd.write(1);

        lcd.setCursor(1, 1);
        lcd.print("PARTIU ALAMEDAS");

        lcd.setCursor(1, 3);
        lcd.print(" ");
        lcd.setCursor(7, 3);
        lcd.write(3);
        

        if (estadoLed)
        {
          lcd.setCursor(0, 0);
          lcd.print(" Desbloqueado ");

          lcd.setCursor(16, 0);
          lcd.write(1);

          lcd.setCursor(1, 1);
          lcd.print("PARTIU ALAMEDAS");

          lcd.setCursor(1, 3);
          lcd.print(" ");
          lcd.setCursor(7, 3);
          lcd.write(3);
        }
        else
        {
          lcd.setCursor(0, 0);
          lcd.print(" Bloqueado   ");
          lcd.setCursor(16, 0);
          lcd.write(0);
          lcd.setCursor(17, 0);
          lcd.print(" ");
          lcd.setCursor(1, 3);
          lcd.write(3);
          lcd.setCursor(7, 3);
          lcd.print(" ");
          lcd.setCursor(1, 1);
          lcd.print("               ");
        }
      }
    }
  }

  estadoAnterior = estadoAtual;
}