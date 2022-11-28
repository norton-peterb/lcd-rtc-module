# LCD RTC Module

## Introduction

Project to interface Real Time Clock with simple LCD Display

## Wiring

### LCD Display (TM1637)

|Pin ID|Purpose|Arduino Pin|
|-----|-----|-----|
|GND|Ground Power|GND|
|VCC|5V Power Source|5V|
|DIO|Digital I/O|4|
|CLK|Digital Clock|5|

No Additional Circuit components are required

### Real Time Clock (DS1307)

|Pin ID|Purpose|Arduino Pin|
|-----|-----|-----|
|GND|Ground Power|GND|
|VCC|5V Power Source|5V|
|SDA|I2C SDA Pin|SDA (Mega-20)|
|SCL|I2C Clock Pin|SCL (Mega-21)|
|SQW|Square Wave Output|No Connection|

No Additional Circuit components are required