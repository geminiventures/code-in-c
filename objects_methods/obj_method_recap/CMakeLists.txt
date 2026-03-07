cmake_minimum_required(VERSION 4.1)
project(obj_method_recap C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(obj_method_recap
        main.c
        point.c
        point.h)
