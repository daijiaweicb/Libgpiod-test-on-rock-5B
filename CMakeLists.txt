cmake_minimum_required(VERSION 3.10)
project(libgpiod_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBGPIOD REQUIRED libgpiod>=1.6.0)

if(NOT LIBGPIOD_FOUND)
    message(FATAL_ERROR "libgpiod not found!")
endif()

set(SOURCES
    Tests/main.cpp
    src/pwm.cpp
    src/ServoMotorSetting.cpp
)

add_executable(TestServoMotor ${SOURCES})

target_include_directories(TestServoMotor PRIVATE
    ${LIBGPIOD_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_directories(TestServoMotor PRIVATE
    ${LIBGPIOD_LIBRARY_DIRS}
)

target_link_libraries(TestServoMotor PRIVATE 
    ${LIBGPIOD_LIBRARIES}
)

target_compile_options(TestServoMotor PRIVATE
    ${LIBGPIOD_CFLAGS_OTHER}
)

install(TARGETS TestServoMotor RUNTIME DESTINATION bin)
