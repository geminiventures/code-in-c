cmake_minimum_required(VERSION 4.1)
project(structs_as_obj C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(structs_as_obj
        counter.c
        counter.h
        main.c)
