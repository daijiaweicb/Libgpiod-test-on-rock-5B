#include "ServoMotorSetting.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cout << "Usage: " << argv[0] << " <left_speed> <right_speed>" << std::endl;
        return 1;
    }

    // The parameters are (channel, frequency, duty cycle, chip No)
    ServoMotorSetting servo_left(0, 50, 1.3, 14); // channel 0, chip 14
    ServoMotorSetting servo_right(0, 50, 1.3, 8); // channel 0, chip 8

    int left_speed = std::atoi(argv[1]);
    int right_speed = std::atoi(argv[2]);

    std::cout << "The speed of the left wheel is " << left_speed << ", the speed of the right wheel is " << right_speed << std::endl;

    while (1)
    {
        servo_left.ChangeSpeed(left_speed);
        servo_right.ChangeSpeed(right_speed);
    }

    return 0;
}