#ifndef SERVO_MOTOR_SETTING_H
#define SERVO_MOTOR_SETTING_H
#include <iostream>
#include "pwm.h"

class ServoMotorSetting
{
public:
    ServoMotorSetting(int channel, int frequency, int duty_cycle, int chipNo);
    ~ServoMotorSetting();
    void ChangeSpeed(int speed);

private:
    PWM pwm; // Assuming PWM is a class that handles PWM operations
    int SpeedToDutyNs(int speed);
};

#endif