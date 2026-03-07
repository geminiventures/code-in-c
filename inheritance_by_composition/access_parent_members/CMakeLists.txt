cmake_minimum_required(VERSION 4.1)
project(access_parent_members C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(access_parent_members
        main.c
        student.c
        student.h)
