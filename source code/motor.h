#ifndef MOTOR_H
#define MOTOR_H


#include <Arduino.h>
#include "config.h"

class Controller
{
    public:
        enum driver {DRV8833,L298,MOTO, BTS7960, ESC};
        Controller(driver motor_driver, int pwm_pin, int motor_pinA, int motor_pinB);
        void spin(int pwm);
  
    private:
        Servo motor_;
        driver motor_driver_;
        int pwm_pin_;
        int motor_pinA_;
        int motor_pinB_;
};

#endif
