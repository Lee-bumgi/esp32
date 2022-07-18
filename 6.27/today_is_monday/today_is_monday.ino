//timer
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int number = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Today is Monday!!!!!");
}

void loop() {

  //lcd.setCursor(10,1);
  //  lcd.print(number);
  //  delay(1000);
  //  number++;

  
  lcd.setCursor(0, 1);
  lcd.print("seconds : ");
  for (int i = 0; i <= 10000; i++) {
    lcd.setCursor(10, 1);
    lcd.print(i);
    delay(100);
  }
}
