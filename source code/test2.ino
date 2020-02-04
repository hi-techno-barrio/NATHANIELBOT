#if (ARDUINO >= 100)
    #include <Arduino.h>
#else
    #include <WProgram.h>
#endif

#include config.h
#include motor.h
  char buffer[50];
Encoder motor1_encoder(MOTOR1_ENCODER_A, MOTOR1_ENCODER_B, COUNTS_PER_REV);
Encoder motor2_encoder(MOTOR2_ENCODER_A, MOTOR2_ENCODER_B, COUNTS_PER_REV); 
Controller motor1_controller(Controller::MOTOR_DRIVER, MOTOR1_PWM, MOTOR1_IN_A, MOTOR1_IN_B);
Controller motor2_controller(Controller::MOTOR_DRIVER, MOTOR2_PWM, MOTOR2_IN_A, MOTOR2_IN_B); 

void loop()

{
 int current_rpm1 = motor1_encoder.getRPM();
 int current_rpm2 = motor2_encoder.getRPM();
 motor1_controller.spin(motor1_pid.compute(req_rpm.motor1, current_rpm1));
 motor2_controller.spin(motor2_pid.compute(req_rpm.motor2, current_rpm2));
 sprintf (buffer, "Encoder FrontLeft  : %ld", motor1_encoder.read());
 nh.loginfo(buffer);
 sprintf (buffer, "Encoder FrontRight : %ld", motor2_encoder.read());
 
}
