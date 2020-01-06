#include<LiquidCrystal_I2C.h>//Libreria

LiquidCrystal_I2C lcd(0x27, 20, 4); //Direccion hexadecimal,tamaño x, tamaño y

void setup()
{
  lcd.init();//inicializa la pantalla
  lcd.backlight();//Enciende la luz de fondo

  lcd.setCursor(7, 0); //posicion 5 en x en la primer linea
  lcd.print("Login");//

  lcd.setCursor(4,1);//posiciona el cursor x,y
  lcd.print("User: user1");//Imprime el msj

  lcd.setCursor(4,2);//posiciona el cursor x,y
  lcd.print("Pass: ");//Imprime el msj

  lcd.blink();//Enciende y apaga el cursor

}
void loop()
{
  
}
