#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inisialisasi LCD: alamat 0x27, ukuran 16x2
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Inisialisasi koneksi I2C dengan GPIO4 dan GPIO5
  Wire.begin(4, 5); // SDA = GPIO4 (D2) Kuning, SCL = GPIO5 (D1) Hijau

  // Inisialisasi LCD
  lcd.begin(16, 2);  // Atau lcd.init(); jika menggunakan library yang berbeda
  lcd.backlight();   // Nyalakan lampu latar LCD

  // Tampilkan teks awal
  lcd.setCursor(0, 0);
  lcd.print("Hello World");
  lcd.setCursor(0, 1);
  lcd.print("Modul is ready to run");
}

void loop() {
  // Tidak ada aksi berulang
}
