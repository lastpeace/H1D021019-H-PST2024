#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

// put function declarations here:
LiquidCrystal_I2C lcd(0x27, 16, 2);
int SDA_pin = D4;
int SCL_pin = D3;

void setup()
{
  Wire.begin(SDA_pin, SCL_pin);
  lcd.begin(16, 2);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("AMMAR YA INI");
  lcd.setCursor(0, 1);
  lcd.print("MWEHEHEHE");
}

void loop()
{
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}