// float temp = 0;

// char msg[8];
// char data[6];

// void setup()
// {
//     Serial.begin(115200, SERIAL_8N1);
//     Serial.setTimeout(10);
// }

// void loop()
// {
//     temp = sin(micros()*1e-6 * 2*PI*10);

//     strcpy(msg, "");
//     dtostrf(temp, 6, 3, msg);

//     Serial.println(msg);
//     Serial.flush();
// }

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();
}

void loop()
{
  lcd.clear();                 // clear display
  lcd.setCursor(0, 0);         // move cursor to   (0, 0)
  lcd.print("Arduino");        // print message at (0, 0)
  lcd.setCursor(2, 1);         // move cursor to   (2, 1)
  lcd.print("GetStarted.com"); // print message at (2, 1)
  delay(2000);                 // display the above for two seconds

  lcd.clear();                  // clear display
  lcd.setCursor(3, 0);          // move cursor to   (3, 0)
  lcd.print("DIYables");        // print message at (3, 0)
  lcd.setCursor(0, 1);          // move cursor to   (0, 1)
  lcd.print("www.diyables.io"); // print message at (0, 1)
  delay(2000);                  // display the above for two seconds
}