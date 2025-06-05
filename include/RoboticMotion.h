#ifndef ROBOTICMOTION_H
#define ROBOTICMOTION_H

#include "ServoMotorSetting.h"

class Motion
{
public:
    Motion(int leftChannel, int rightChannel, float low_time, float high_time, int rightChipNo, int leftChipNo);

    void Forward(float speed);
    void Backward(float speed);
    void TurnLeft(float speed);
    void TurnRight(float speed);
    void Stop();

private:
    ServoMotorSetting leftMotor;
    ServoMotorSetting rightMotor;
};

#endif