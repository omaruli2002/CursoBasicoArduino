//https://parzibyte.me/blog/2018/02/02/obtener-direccion-modulo-i2c-lcd-arduino/#Arduino_UNO


#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2); // Dirección de la pantalla y tamaño

void setup() {
  lcd.init(); // Inicializa la pantalla
  lcd.backlight(); // Enciende el backlight
  lcd.setCursor(0, 0); // Posiciona el cursor en la primera línea
  lcd.print("Hola, mundo!"); // Escribe el mensaje en la primera línea
  lcd.setCursor(0, 1); // Posiciona el cursor en la segunda línea
  lcd.print("Este es un ejemplo"); // Escribe el mensaje en la segunda línea
}

void loop() {
  // No se hace nada en el loop
}
