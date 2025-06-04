#include "RoboticMotion.h"

Motion::Motion(int leftChannel, int rightChannel, float low_time, float high_time, int rightChipNo, int leftChipNo)
    : leftMotor(leftChannel, low_time, high_time, leftChipNo), rightMotor(rightChannel, low_time, high_time, rightChipNo)
{
}

void Motion::Forward(int speed)
{
    leftMotor.ChangeSpeed(speed);
    rightMotor.ChangeSpeed(speed);
}

void Motion::Backward(int speed)
{
    leftMotor.ChangeSpeed(-speed);
    rightMotor.ChangeSpeed(-speed);
}

void Motion::TurnLeft(int speed)
{
    leftMotor.ChangeSpeed(speed / 2);
    rightMotor.ChangeSpeed(speed);
}

void Motion::TurnRight(int speed)
{
    leftMotor.ChangeSpeed(speed);
    rightMotor.ChangeSpeed(speed / 2);
}

void Motion::Stop()
{
    leftMotor.StopMotor();
    rightMotor.StopMotor();
}