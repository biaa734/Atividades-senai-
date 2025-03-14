
//void setup()
//{
  //lcd.init ();
  //lcd.backlight ();
  //lcd.print ("oi");
//}

 //lcd.init (); // inicia o codigo 
  //lcd.backlight () //liga a luz de fundo //lcd.noBacklight; desliga 
  //pinMode (2,INPUT);
  //lcd.setCursor (0,0); //lcd.home () pode substituir o (0,0)
  //lcd.print  ("OLA MUNDO") //mandar informacao para o lcd
  //lcd.setCursor (0,1);
  //lcd.print ("SENAI");

//lcd.setCursor (6,1);
//lcd.print (millis ()/1000);

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
#define pinBotao 2
#define pinLed 4

void setup()
{
  pinMode (pinBotao,INPUT);
  pinMode (pinLed,OUTPUT);
  lcd.init ();
  lcd.backlight ();
  
}
void loop()
{

  
  static  bool estadoLed = 0;
  static bool estadoAnterior = 0; 
  static bool estadoBotao = 0;
 
  
  bool estadoAtual = digitalRead(pinBotao);
    
  if (estadoAtual == 1 && estadoAnterior == 0){
    
    estadoLed = !estadoLed;
    digitalWrite(pinLed, estadoLed); 
  }
  estadoAnterior=estadoAtual; 

  if (estadoLed)
  {
   lcd.setCursor (0,0); // para poder posicionar antes de escrever
  lcd.print (" Led Ligado   ");
  
 
  }
  else 
  {
    lcd.setCursor (0,0);
  lcd.print (" Led Desligado");
  
  }
 
}
