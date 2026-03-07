cmake_minimum_required(VERSION 4.1)
project(first_member_rule C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(first_member_rule
        animal.c
        animal.h
        main.c)
