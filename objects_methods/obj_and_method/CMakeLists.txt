cmake_minimum_required(VERSION 4.1)
project(obj_and_method C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(obj_and_method
        main.c
        product.c
        product.h)
