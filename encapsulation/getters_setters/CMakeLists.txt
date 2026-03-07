cmake_minimum_required(VERSION 4.1)
project(getters_setters C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(getters_setters
        main.c
        score.c
        score.h)
