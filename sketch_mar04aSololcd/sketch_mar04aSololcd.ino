#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,10,11,12,13);
int i, clave[4], dato;
int sw = 2;
void setup(){
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print(" BIENVENIDOS");
  lcd.setCursor(0,1);
  lcd.print(" COMUNICACIONES");
}
void prender(){
  for(i=0; i<5; i++) 
{
digitalWrite(13, HIGH);
delay(500);
digitalWrite(13, LOW);
delay(500);
}

 

}
void loop(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" BIENVENIDOS");
  lcd.setCursor(0,1);
  lcd.print(" COMUNICACIONES");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ANDRES ARENAS");
  lcd.setCursor(0,1);
  lcd.print("VICTOR PRECIADO");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("  INGRESE");
  lcd.setCursor(0,1);
  lcd.print("  CLAVE");
  delay(4000);
  
  dato=digitalRead(2);
  if(dato==LOW)
  {
    prender();
    delay(2000);
  }
  delay(1000);
}
