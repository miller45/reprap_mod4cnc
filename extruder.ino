// Yep, this is actually -*- c++ -*-

//[rk] dummyized by rk

#include "ThermistorTable.h"

#define EXTRUDER_FORWARD true
#define EXTRUDER_REVERSE false

//these our the default values for the extruder.
int extruder_speed = 128;
int extruder_target_celsius = 0;
int extruder_max_celsius = 0;
byte extruder_heater_low = 64;
byte extruder_heater_high = 255;
byte extruder_heater_current = 0;

//this is for doing encoder based extruder control
int extruder_rpm = 0;
long extruder_delay = 0;
int extruder_error = 0;
int last_extruder_error = 0;
int extruder_error_delta = 0;
bool extruder_direction = EXTRUDER_FORWARD;

volatile uint8_t *extruder_motor_dir_reg;
volatile uint8_t extruder_motor_dir_bitmask;

void init_extruder()
{
  
}

void extruder_set_direction(bool direction)
{
  
}

void extruder_set_speed(byte speed)
{
  
}

void extruder_set_cooler(byte speed)
{
  
}

void extruder_set_temperature(int temp)
{
 
}

/**
*  Samples the temperature and converts it to degrees celsius.
*  Returns degrees celsius.
*/
int extruder_get_temperature()
{
   return 0;
}

/*
* This function gives us an averaged sample of the analog temperature pin.
*/
int extruder_sample_temperature(byte pin)
{
  int raw = 0;

  return raw;
}

/*!
  Manages motor and heater based on measured temperature:
  o If temp is too low, don't start the motor
  o Adjust the heater power to keep the temperature at the target
 */
void extruder_manage_temperature()
{

}

