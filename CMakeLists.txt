cmake_minimum_required(VERSION 3.10)
project(libgpiod_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBGPIOD REQUIRED libgpiod>=1.6.0)

include_directories(${LIBGPIOD_INCLUDE_DIRS})
link_directories(${LIBGPIOD_LIBRARY_DIRS})
add_executable(test_gpiod main.cpp pwm.cpp servo_motor_setting.cpp)
