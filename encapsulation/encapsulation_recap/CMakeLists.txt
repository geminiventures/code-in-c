cmake_minimum_required(VERSION 4.1)
project(encapsulation_recap C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(encapsulation_recap
        box.c
        box.h
        main.c)
