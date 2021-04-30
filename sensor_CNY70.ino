#include  <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(A0,INPUT);
  lcd.begin(16, 2);
  lcd.home();
  Serial.begin(9600);
 
}

void loop()
{
  float V,DIST;
  float ConVolt; 
  V=analogRead(A0);
  ConVolt=V*(5.0/1023.0);
  DIST = (0.4608*(ConVolt-5.3516)*(ConVolt-4.0741));
  lcd.setCursor(3,0);
  lcd.print("DISTANCIA: ");
  lcd.setCursor(6,1);
  lcd.print(DIST); 
  lcd.print("mm");
}
