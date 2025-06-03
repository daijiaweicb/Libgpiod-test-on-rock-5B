#ifndef SERVO_MOTOR_SETTING_H
#define SERVO_MOTOR_SETTING_H
#include <iostream>
#include "pwm.h"

#define INVERSEDUTY 20000000

class ServoMotorSetting
{
public:
    ServoMotorSetting(int channel, float low_time, float high_time, int chipNo);
    ~ServoMotorSetting();
    void ChangeSpeed(int speed);
    void StopMotor();

private:
    PWM pwm; // Assuming PWM is a class that handles PWM operations
    int SpeedToHighTime(int speed);
};

#endif