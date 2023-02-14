#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1, 0);
  lcd.print("Fuck my life");


}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(7, 1);
  lcd.print(millis() / 1000);

}
