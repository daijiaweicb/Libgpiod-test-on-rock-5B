# Installation
```bash
mkdir build
cd build
cmake ..
make
sudo make install
```

# Tests
## 1. Test the servo motor
Set the speed of two servo motors based on command line arguments.
```bash
./TestServoMotor <left_speed> <right_speed>
```
- `<left_speed>`: Speed value for the left servo motor(-10~10)
- `<right_speed>`: Speed value for the right servo motor(-10~10)
- `speed range`: -10 is full speed counterclockwise, 10 is full speed clockwise, 0 is no rotation

## 2. Test the speed change
Increases the speed of two servo motors from -10 to 10. The speed is changed every second, and the final speed is printed to the console.
```bash
./TestSpeedChange
```

## 3. Test the bot motion
This test allows you to control a robot using your keyboard in a terminal environment. You can drive the robot forward, backward, turn, adjust speed, stop, and exit the program using designated keys.
```bash
./TestBotMotion
```

### Controls
| Key | Action         |
|-----|---------------|
| W   | Forward       |
| S   | Backward      |
| A   | Turn Left     |
| D   | Turn Right    |
| R   | Speed Up      |
| F   | Decelerate    |
| X   | Stop          |
| Z   | Quit          |

### Example

```text
Use the keyboard to control the bot: W(forward) S(backward) A(turn left) D(turn right) R(speed up) F(decelerate) X(stop) Z(quit)
Forward.....The speed is: 3
Turn left.....The speed is: 3
Speed up.....The speed is: 4
Stop.....
Quit.....
```
