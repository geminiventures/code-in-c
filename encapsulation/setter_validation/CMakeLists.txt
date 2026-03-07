cmake_minimum_required(VERSION 4.1)
project(setter_validation C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(setter_validation
        main.c
        temperature.c
        temperature.h)
