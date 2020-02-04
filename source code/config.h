/* By Juan Miguel Jimeno
modified Christopher Coballes
Developer @Hi-Techno Barrio
*/
#ifndef _CONFIG_H
#define _CONFIG_H

//uncomment the base you're building
#define LINO_BASE DIFFERENTIAL_DRIVE // 2WD and Tracked robot w/ 2 motors
// #define LINO_BASE SKID_STEER      // 4WD robot
// #define LINO_BASE ACKERMANN       // Car-like steering robot w/ 2 motors
// #define LINO_BASE ACKERMANN1      // Car-like steering robot w/ 1 motor
// #define LINO_BASE MECANUM         // Mecanum drive robot

//uncomment the motor driver you're using
#define USE_DRV8833
// #define USE_L298_DRIVER
// #define USE_BTS7960_DRIVER
// #define USE_ESC

//uncomment the IMU you're using
//#define USE_GY85_IMU
  #define USE_MPU6050_IMU
// #define USE_MPU9150_IMU
// #define USE_MPU9250_IMU

#define DEBUG 1
#define K_P 0.6 // P constant
#define K_I 0.3 // I constant
#define K_D 0.5 // D constant

//define your robot' specs here
#define MAX_RPM 330               // motor's maximum RPM
#define COUNTS_PER_REV 1550       // wheel encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.10       // wheel's diameter in meters
#define PWM_BITS 8                // PWM Resolution of the microcontroller
#define LR_WHEELS_DISTANCE 0.235  // distance between left and right wheels
#define FR_WHEELS_DISTANCE 0.30   // distance between front and rear wheels. Ignore this if you're on 2WD/ACKERMANN
#define MAX_STEERING_ANGLE 0.415  // max steering angle. This only applies to Ackermann steering


/// ENCODER PINS
#define MOTOR1_ENCODER_A 15
#define MOTOR1_ENCODER_B 14 
#define MOTOR2_ENCODER_A 11
#define MOTOR2_ENCODER_B 12 

//MOTOR PINS
#ifdef USE_DRV8833_DRIVER
  #define MOTOR_DRIVER DRV8833

#define MOTOR1_IN_A 20
#define MOTOR1_IN_B 1
#define MOTOR2_IN_A 8
#define MOTOR2_IN_B 6
#endif 

#endif
