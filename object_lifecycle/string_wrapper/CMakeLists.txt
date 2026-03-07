cmake_minimum_required(VERSION 4.1)
project(string_wrapper C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(string_wrapper
        main.c
        stringobj.c
        stringobj.h)
