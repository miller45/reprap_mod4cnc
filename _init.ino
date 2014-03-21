// RK: all values based on 1/4 steps



 // define the parameters of our machine. 
 // belt drive 
//#define X_STEPS_PER_INCH 
//#define X_STEPS_PER_MM 
  
#define STEPPER_MICROSTEPS 16
  
 // all thread leadscrew 
#define X_STEPS_PER_INCH 5080.0000051816*STEPPER_MICROSTEPS
#define X_STEPS_PER_MM 200*STEPPER_MICROSTEPS
  
 // ACME leadscrew 
//#define X_STEPS_PER_INCH 1600*STEPPER_MICROSTEPS
//#define X_STEPS_PER_MM 62.99212592*STEPPER_MICROSTEPS
  
#define Y_STEPS_PER_INCH 5080.0000051816*STEPPER_MICROSTEPS
#define Y_STEPS_PER_MM 200*STEPPER_MICROSTEPS
  
#define Z_STEPS_PER_INCH 2000*STEPPER_MICROSTEPS
#define Z_STEPS_PER_MM 78.7401574*STEPPER_MICROSTEPS
  
 //our maximum feedrates in units/minute 

#if STEPPER_MICROSTEPS == 16
#define FAST_XY_FEEDRATE_INCH 4.724
#define FAST_Z_FEEDRATE_INCH 4.724

#define FAST_XY_FEEDRATE_MM 120
#define FAST_Z_FEEDRATE_MM 120

#elif STEPPER_MICROSTEPS == 4
#define FAST_XY_FEEDRATE_INCH 7.086
#define FAST_Z_FEEDRATE_INCH 5.905

#define FAST_XY_FEEDRATE_MM 180
#define FAST_Z_FEEDRATE_MM 180

#else
#define FAST_XY_FEEDRATE_INCH 1.7716535415
#define FAST_Z_FEEDRATE_INCH 1.47637795125

#define FAST_XY_FEEDRATE_MM 45
#define FAST_Z_FEEDRATE_MM 37.5


#endif
  
 // Maximum acceleration in units/minute/second 
 // E.g. for 300.0 machine would accelerate to 150units/minute in 0.5sec etc. 
#define MAX_ACCEL_INCH 1.47
#define MAX_ACCEL_MM 37//37
  
 // Maximum change in velocity per axis - if the change in velocity at the start 
 // of the next move is greater than this for at least one axis, we will decelerate 
 // to a stop before commencing the move, otherwise we will keep going 
 // value is units/minute 
#define MAX_DELTA_V_INCH 0.9842519675
#define MAX_DELTA_V_MM 25


// Set to one if endstop outputs are inverting (ie: 1 means open, 0 means closed)
// RepRap opto endstops are *not* inverting.
#define ENDSTOPS_INVERTING 1

// Optionally disable max endstops to save pins or wiring
#define ENDSTOPS_MIN_ENABLED 1
#define ENDSTOPS_MAX_ENABLED 1

// How many temperature samples to take.  each sample takes about 100 usecs.
#define TEMPERATURE_SAMPLES 5

// The *_ENABLE_PIN signals are active high as default. Define this
// to one if they should be active low instead (e.g. if you're using different
// stepper boards).
// RepRap stepper boards are *not* inverting.
#define INVERT_ENABLE_PINS 1

// If you use this firmware on a cartesian platform where the
// stepper direction pins are inverted, set these defines to 1
// for the axes which should be inverted.
// RepRap stepper boards are *not* inverting.
#define INVERT_DIR 0 // CHANGED CM - ONLY ONE FOR ALL AXES

#define STEPPERS_ALWAYS_ON 0


/****************************************************************************************
* digital i/o pin assignment
*
* this uses the undocumented feature of Arduino - pins 14-19 correspond to analog 0-5
****************************************************************************************/

//cartesian bot pins
#define X_STEP_PIN 3
#define X_DIR_PIN 4
#define X_ENABLE_PIN 2
#define X_MIN_PIN 10
#define X_MAX_PIN 10

#define Y_STEP_PIN 6
#define Y_DIR_PIN 7
#define Y_ENABLE_PIN 5
#define Y_MIN_PIN 8
#define Y_MAX_PIN 9

#define Z_STEP_PIN 12
#define Z_DIR_PIN 13
#define Z_ENABLE_PIN 11
#define Z_MIN_PIN 10
#define Z_MAX_PIN 10

//extruder pins
// NOTE - USING Timer1 FOR STEPPER TIMER SO CAN'T USER PINS 9 OR 10 FOR PWM
// OUTPUT (EXTRUDER_MOTOR_SPEED_PIN, EXTRUDER_HEATER_PIN, OR EXTRUDER_FAN_PIN)
//#define EXTRUDER_MOTOR_SPEED_PIN   19
//#define EXTRUDER_MOTOR_DIR_PIN     19
//#define EXTRUDER_HEATER_PIN        19
//#define EXTRUDER_FAN_PIN           19
//#define EXTRUDER_THERMISTOR_PIN    -1  //a -1 disables thermistor readings
//#define EXTRUDER_THERMOCOUPLE_PIN  -1 //a -1 disables thermocouple readings


#define MSPIN A5
#define CANTSTEP_LED_PIN 13

//#define WAIT_SIGNAL_PIN A1
//#define WAIT_LED_PIN A2


