cmake_minimum_required(VERSION 4.1)
project(opaque_structs C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(opaque_structs
        main.c
        timer.c
        timer.h)
