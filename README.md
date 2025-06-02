# Installation
```bash
mkdir build
cd build
cmake ..
make
sudo make install
```

# Description
## Servo motor setting
Add to '/boot/firmware/config.txt':
```
dtoverlay=pwm-2chan
```
Check with:
```
pinctrl -p
```