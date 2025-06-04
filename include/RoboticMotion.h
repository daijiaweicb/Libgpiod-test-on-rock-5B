#ifndef ROBOTICMOTION_H
#define ROBOTICMOTION_H

#include "ServoMotorSetting.h"

class Motion
{
public:
    Motion(int leftChannel, int rightChannel, float low_time, float high_time, int rightChipNo, int leftChipNo);

    void Forward(int speed);
    void Backward(int speed);
    void TurnLeft(int speed);
    void TurnRight(int speed);
    void Stop();

private:
    ServoMotorSetting leftMotor;
    ServoMotorSetting rightMotor;
};

#endif