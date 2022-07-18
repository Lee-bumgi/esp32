#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);

void setup() {
  lcd.begin(16,2);
 
}

void loop() {
  lcd.clear();
  lcd.print("brightness");
  int sensorValue = analogRead(A0);
  lcd.setCursor(0,1);
  lcd.print(sensorValue);

  delay(300);
}
