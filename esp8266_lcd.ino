#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Wire.begin(4, 5); // SDA = GPIO4 (D2) Kuning, SCL = GPIO5 (D1) Hijau
  lcd.begin(16, 2);  
  lcd.backlight();   

  lcd.setCursor(0, 0);
  lcd.print("Hello World");
  lcd.setCursor(0, 1);
  lcd.print("Modul is ready to run");
}

void loop() {

}
