cmake_minimum_required(VERSION 4.1)
project(shape_hierarchy C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(shape_hierarchy
        main.c
        shape.c
        shape.h)
