cmake_minimum_required(VERSION 4.1)
project(deep_copy C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(deep_copy
        main.c
        student.c
        student.h)
