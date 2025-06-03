#include "ServoMotorSetting.h"
#include <thread>

using namespace std;

int main(int argc, char* argv[])
{
    ServoMotorSetting servo_right(0, 20, 1.5, 14); // 1.5ms
    ServoMotorSetting servo_left(0, 20, 1.5, 8); // 1.5ms

    int speed = -10;

    for(int i = 0; i < 20; i++)
    {
        servo_left.ChangeSpeed(speed);
        servo_right.ChangeSpeed(speed);
        cout << "The speed is: " << speed << endl;
        speed ++;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    servo_left.StopMotor();
    servo_right.StopMotor();

    return 0;
}