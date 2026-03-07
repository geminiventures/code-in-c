cmake_minimum_required(VERSION 4.1)
project(helper_methods C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(helper_methods
        circle.c
        circle.h
        main.c)
