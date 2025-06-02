#include "ServoMotorSetting.h"

ServoMotorSetting::ServoMotorSetting(int channel, int frequency, int duty_cycle, int chipNo)
{
    pwm.StartPWM(channel, frequency, duty_cycle, chipNo);
}

ServoMotorSetting::~ServoMotorSetting()
{
}

int ServoMotorSetting::SpeedToDutyNs(int speed) // speed range from -100 to 100, 0 is stop
{
    if (speed > 100)
        speed = 100;
    if (speed < -100)
        speed = -100;

    return 2000000 + (speed * 5000); // 5000 = 500000 / 100;
}

void ServoMotorSetting::ChangeSpeed(int speed)
{
    int duty_ns = SpeedToDutyNs(speed);
    pwm.SetDutyCycleNS(duty_ns);
}
