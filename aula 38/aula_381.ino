#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
// 1 quando aperta aparece 0
// 2 quando aperta aparece 145
// 3 quando aperta aparece 329
// 4 quando aperta aparece 505
// 5 quando aperta aparece 741

#define botao1 0
#define botao2 145
#define botao3 329
#define botao4 505 
#define botao5 741

void setup()
{
 Serial.begin (9600);
 lcd.init ();
 lcd.backlight ();
 
}

void loop()
{
  int botao =analogRead (A0);
   
  if (botao == botao1)
  {
   lcd.setCursor (0,0);
   lcd.print(" Botao 1 ligado");
  }
  if (botao >= botao2 *0.9 && botao <= botao2* 1.1)
  {
  lcd.setCursor (0,0);
  lcd.print(" Botao 2 ligado");
  }
  if (botao >= botao3  *0.9 && botao <= botao3* 1.1)
  {
   lcd.setCursor (0,0);
   lcd.print(" Botao 3 ligado");
  }
  if (botao >= botao4  *0.9 && botao <= botao4 * 1.1)
  {
  lcd.setCursor (0,0);
  lcd.print(" Botao 4 ligado");
  
  }
   if (botao >= botao5 *0.9 && botao <= botao5 * 1.1)
  {
  lcd.setCursor (0,0);
  lcd.print(" Botao 5 ligado");
  
  }
  if (botao == 1023)// colocamos isso porque precisavamos desligar e para desligar precisa do valor total do sistema
  { //tem q vir primeiro para economizar codigo
  lcd.setCursor (0,0);
  lcd.print("Nenhum botao   ");
  
  }
  
}
