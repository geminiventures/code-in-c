cmake_minimum_required(VERSION 4.1)
project(stack_initialization C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(stack_initialization
        main.c
        temperature.c
        temperature.h)
