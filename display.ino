#define ENABLEI2C
// display lib

/*
** Example Arduino sketch for SainSmart I2C LCD2004 adapter for HD44780 LCD screens
** Readily found on eBay or http://www.sainsmart.com/ 
** The LCD2004 module appears to be identical to one marketed by YwRobot
**
** Address pins 0,1 & 2 are all permenantly tied high so the address is fixed at 0x27
**
** Written for and tested with Arduino 1.0
** This example uses F Malpartida's NewLiquidCrystal library. Obtain from:
** https://bitbucket.org/fmalpartida/new-liquidcrystal 
**
** Edward Comer
** LICENSE: GNU General Public License, version 3 (GPL-3.0)
**
** NOTE: TEsted on Arduino NANO whose I2C pins are A4==SDA, A5==SCL
*/

#ifdef ENABLEI2C
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>


#define I2C_ADDR    0x3F  // Define I2C Address where the PCF8574A is
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7
#define LASTROW 3

int n = 1;

LiquidCrystal_I2C	lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

int line=0;

void init_display()
{
  lcd.begin (20,LASTROW+1);
  
// Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home ();                   // go home
  lcd.cursor();
  LCDprint(".............");   
  delay(250);
  LCDsetCursorRow(0);
  LCDprint("CNC/Root V1.1");   
  LCDsetCursorRow(1);
  LCDprintln("L2");
  LCDprintln("L3");
  LCDprintln("Status ROW");

//  lcd.print("L1");
//  lcd.setCursor ( 0, 2 );        // go to the third line
//  lcd.print("L2");
//  lcd.setCursor ( 0, 3 );        // go to the fourth line
//  lcd.print("Iteration No: ");
}

void LCDhome(){
  lcd.home();
  line=0;
}

void LCDsetCursorRow(uint8_t row){
  line=row;
  lcd.setCursor(0,row);
}

void LCDprintln(void)
{
  if(line<LASTROW){
     line++;
  }else{
    line=0;
  }
  LCDsetCursorRow(line);
}

void LCDprint(char c)
{
   lcd.print(c);
//  RR_serialWrite(c);
//  Serial.write(c);
}

void LCDprint(const char c[])
{
   lcd.print(c);
//  while (*c)
//    LCDprint(*c++);
}

void LCDprintln(const char c[])
{
   lcd.print(c);
   LCDprintln();
}

void LCDprintln(int n)
{
  printNumber((unsigned int)n);
  LCDprintln();
}
void LCDprintstatus(char c){
  if(line!=0){
     LCDsetCursorRow(0);
  }

  LCDprint(c);
}
void LCDprintstatus(const char c[]){
 if(line!=0){
     LCDsetCursorRow(0);
  }
  LCDprint(c);
}

void LCDprintstatus(float f){
 if(line!=0){
     LCDsetCursorRow(0);
  }
  LCDprint(f);
}
#else
// dummys for compile corrent
void init_display()
{
  
}

void LCDhome(){
 
}

void LCDsetCursorRow(uint8_t row){
 
}

void LCDprintln(void)
{
 
}

void LCDprint(char c)
{
  
}

void LCDprint(const char c[])
{
 
}

void LCDprintln(const char c[])
{
  
}

void LCDprintln(int n)
{
 
}
#endif
