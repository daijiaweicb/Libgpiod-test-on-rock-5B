#ifndef ROBOTICMOTION_H
#define ROBOTICMOTION_H

#include "ServoMotorSetting.h"

class Motion
{
public:
    /**
     * Motion 
     * 
     * @param  {int} leftChannel  : The GPIO pin number for the left motor
     * @param  {int} rightChannel : The GPIO pin number for the right motor
     * @param  {float} low_time   : The low time duration for the PWM signal
     * @param  {float} high_time  : The high time duration for the PWM signal
     * @param  {int} rightChipNo  : The chip number for the right motor
     * @param  {int} leftChipNo   : The chip number for the left motor
     */
    Motion(int leftChannel, int rightChannel, float low_time, float high_time, int rightChipNo, int leftChipNo);

    /**
     * Move the robot forward.
     * @param  {float} speed : The speed to move forward.
     */
    void Forward(float speed);

    /**
     * Move the robot backward.
     * @param  {float} speed : The speed to move backward.
     */
    void Backward(float speed);

    /**
     * Move the robot to the left.
     * @param  {float} speed : The speed to move to the left.
     */
    void TurnLeft(float speed);

    /**
     * Move the robot to the right.
     * @param  {float} speed : The speed to move to the right.
     */
    void TurnRight(float speed);

    /**
     * Stop the robot.
     */
    void Stop();

private:
    ServoMotorSetting leftMotor;
    ServoMotorSetting rightMotor;
};

#endif