cmake_minimum_required(VERSION 4.1)
project(self_pointer C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(self_pointer
        main.c
        timer.c
        timer.h)
