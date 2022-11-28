#include <Arduino.h>
#include "TM1637Display.h"
#include "SparkFunDS1307RTC.h"

#define LCD_CLK 3
#define LCD_DIO 4

TM1637Display lcd = TM1637Display(LCD_CLK,LCD_DIO);

const uint8_t test_lcd[] {
  0b01111111,0b01111111,0b01111111,0b01111111
};
bool flip_dots = false;

void setup() {
  lcd.setBrightness(3);
  lcd.setSegments(test_lcd,4,0);
  delay(1000);
  lcd.clear();
  rtc.begin();
  rtc.set24Hour(true);
}

void loop() {
  if(flip_dots) {
    lcd.showNumberDecEx(rtc.getHour(),0b01000000,true,2,0);
    lcd.showNumberDecEx(rtc.getMinute(),0b01000000,true,2,2);
  } else {
    lcd.showNumberDec(rtc.getHour(),true,2,0);
    lcd.showNumberDec(rtc.getMinute(),true,2,2);
  }
  flip_dots = !flip_dots;
  delay(1000);
}