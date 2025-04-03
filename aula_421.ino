/*
Autor: Bianca
Nome da programação: aula 29
Descrição: quando voce apertar o botao 5 tem que
mudar o estado do led
Data:20/03/25
*/
// botao so indica
// analogWrite (pinLedB,intensidadeB * 2.55

//**** DECLARACAO DAS BIBLIOTECAS *****
#include <LiquidCrystal_I2C.h>

//***** DEFINIÇÕES ******
#define valorBotao1 0
#define valorBotao2 145
#define valorBotao3 329
#define valorBotao4 505
#define valorBotao5 741
#define valorSolto 1023
#define pinLedA 11
#define pinLedB 10

//***** INSTANCIAS DE OBJETOS *****
LiquidCrystal_I2C lcd(0x27, 16, 2);

//***** VARIAVEIS GLOBAIS ******

void setup()
{
    pinMode(pinLedA, OUTPUT);
    pinMode(pinLedB, OUTPUT);
    lcd.init();              // Inicia o lcd
    lcd.backlight();         // Liga luz de fundo do lcd
    lcd.setCursor(0, 0);     // informa a linha para escrever
    lcd.print(">LED A OFF"); // escreve no lcd
    lcd.setCursor(1, 1);
    lcd.print("LED B OFF");
}

void loop()
{
    int valorLeituraAnalogica = analogRead(A0);
    static int valorAnterior = 1023;
    static int posicao = 0;
    static int estadoLedA = 0;
    static int estadoLedB = 0;
    static int atualizacao = 0; // para correr o codigo mais rapido
    static int intensidadeLedA = 0;
    static int intensidadeLedB = 0;
    static int resultado = 0;
    static int resultadoB = 0;

    //***** TRATAMENTO DOS BOTOES *******
    // NENHUM BOTAO
    if (valorLeituraAnalogica == valorSolto)
    {
    }

    // BOTAO 1 PRESSIONADO
    else if (valorLeituraAnalogica == valorBotao1 &&
             valorAnterior == valorSolto)
    {
        posicao = 0;
        atualizacao = 1;
    }

    // BOTAO 2 PRESSIONADO
    else if (valorLeituraAnalogica >= valorBotao2 * 0.9 &&
             valorLeituraAnalogica <= valorBotao2 * 1.1 &&
             valorAnterior == valorSolto)
    {
        posicao = 1;
        atualizacao = 1;
    }

    // BOTAO 3 PRESSIONADO
    else if (valorLeituraAnalogica >= valorBotao3 * 0.9 &&
             valorLeituraAnalogica <= valorBotao3 * 1.1 &&
             valorAnterior == valorSolto)
    {
      	atualizacao = 1;

        if (posicao == 0)
        {
            if (intensidadeLedA > 0 && estadoLedA==1)
            {
                intensidadeLedA = intensidadeLedA - 10;
            }
        }
        else
        {
            if (intensidadeLedB > 0 && estadoLedB == 1)
            {
                intensidadeLedB = intensidadeLedB - 10;
            }
        }
    }
    // BOTAO 4 PRESSIONADO
    else if (valorLeituraAnalogica >= valorBotao4 * 0.9 &&
             valorLeituraAnalogica <= valorBotao4 * 1.1 &&
             valorAnterior == valorSolto)
    {
      	atualizacao = 1;

        if (posicao == 0)
        {
            if (intensidadeLedA < 100 && estadoLedA == 1)
            {
                intensidadeLedA = intensidadeLedA + 10;
            }
        }
        else
        {
          if (intensidadeLedB < 100 && estadoLedB == 1)
          {
            intensidadeLedB = intensidadeLedB + 10;
          }
        }
       
    }
    // BOTAO 5 PRESSIONADO
    else if (valorLeituraAnalogica >= valorBotao5 * 0.9 &&
             valorLeituraAnalogica <= valorBotao5 * 1.1 &&
             valorAnterior == valorSolto)
    {
        atualizacao = 1;
        if (posicao == 0)
            estadoLedA = !estadoLedA;

        else
            estadoLedB = !estadoLedB;
    }

    valorAnterior = valorLeituraAnalogica;

    //****** FIM DO TRATAMENTO DOS BOTOES ******

    if (atualizacao == 1)
    {
  		resultado = map(intensidadeLedA, 0, 100, 0, 255);
    	resultadoB = map(intensidadeLedB, 0, 100, 0, 255);
      
        // ***** ATUALIZA DISPLAY ******

        if (posicao == 0) // setinha na linha de cima
        {
            lcd.setCursor(0, 0);
            lcd.print(">");
            lcd.setCursor(0, 1);
            lcd.print(" ");
        }

        else
        {
            lcd.setCursor(0, 1);
            lcd.print(">");
            lcd.setCursor(0, 0);
            lcd.print(" ");
        }
        // MUDA O TEXTO DO LED A
        lcd.setCursor(7, 0);

        if (estadoLedA == 0)
            lcd.print("OFF");

      else{
            lcd.setCursor(7, 0);
        lcd.print(intensidadeLedA);
       lcd.print ("  ");}

        // MUDA O TEXTO DO LED B
        lcd.setCursor(7, 1);

        if (estadoLedB == 0)
            lcd.print("OFF");

      else{
            lcd.setCursor(7, 1);
        lcd.print(intensidadeLedB);
      lcd.print ("  ");}

        //***** ATUALIZACAO DOS LED ******
          if (estadoLedA == 0) // faço isso para eu poder desligar msm a intensidade estiver ligada
         resultado = 0;
        analogWrite(pinLedA, resultado);
        if (estadoLedB == 0)
        resultado = 0;
       analogWrite(pinLedB, resultadoB);
    

        atualizacao = 0;
    }
}
