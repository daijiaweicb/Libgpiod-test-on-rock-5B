#include "RoboticMotion.h"

Motion::Motion(int leftChannel, int rightChannel, float low_time, float high_time, int rightChipNo, int leftChipNo)
    : leftMotor(leftChannel, low_time, high_time, leftChipNo), rightMotor(rightChannel, low_time, high_time, rightChipNo)
{
}

void Motion::Forward(float speed)
{
    leftMotor.ChangeSpeed(speed);
    rightMotor.ChangeSpeed(-speed);
}

void Motion::Backward(float speed)
{
    leftMotor.ChangeSpeed(-speed);
    rightMotor.ChangeSpeed(speed);
}

void Motion::TurnLeft(float speed)
{
    leftMotor.ChangeSpeed(speed / 2.0f);
    rightMotor.ChangeSpeed(-speed);
}

void Motion::TurnRight(float speed)
{
    leftMotor.ChangeSpeed(speed);
    rightMotor.ChangeSpeed(-speed / 2.0f);
}

void Motion::Stop()
{
    leftMotor.StopMotor();
    rightMotor.StopMotor();
}