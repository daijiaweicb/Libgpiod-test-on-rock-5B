#include "ServoMotorSetting.h"

ServoMotorSetting::ServoMotorSetting(int channel, int low_time, int high_time, int chipNo)
{
    pwm.StartPWM(channel, low_time, high_time, chipNo);
}

ServoMotorSetting::~ServoMotorSetting()
{
}

// high time range from 1.3ms to 1.7ms: 1.3 is full speed clockwise, 1.5 is no rotation, 1.7 is full speed counterclockwise
int ServoMotorSetting::SpeedToHighTime(int speed) // speed range from -10 to 10, 0 is stop
{
    if (speed > 10)
        speed = 10;
    if (speed < -10)
        speed = -10;

    int neutral_time = 1500000;
    int step_size = 20000;

    return neutral_time + (speed * step_size);
}

void ServoMotorSetting::ChangeSpeed(int speed)
{
    int duty_ns = SpeedToHighTime(speed);
    int per = 20000000 + duty_ns;
    pwm.SetPeriod(per);
    // pwm.SetDutyCycleNS(duty_ns);
    pwm.SetDutyCycleNS(20000000);
}
