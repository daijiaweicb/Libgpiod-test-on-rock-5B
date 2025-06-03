#include "ServoMotorSetting.h"
#include <thread>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cout << "Usage: " << argv[0] << " <left_speed> <right_speed>(speed range from -10 to 10)" << std::endl;
        return 1;
    }

    ServoMotorSetting servo_left(0, 20, 1.5, 14); // 1.5ms
    ServoMotorSetting servo_right(0, 20, 1.5, 8); // 1.5ms

    int left_speed = std::atoi(argv[1]);
    int right_speed = std::atoi(argv[2]);

    std::cout << "Setting speeds - Left: " << left_speed << ", Right: " << right_speed << std::endl;

    servo_left.ChangeSpeed(left_speed);
    servo_right.ChangeSpeed(right_speed);

    while (1)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    return 0;
}