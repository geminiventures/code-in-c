cmake_minimum_required(VERSION 4.1)
project(const_correctness C)

set(CMAKE_C_STANDARD 11)

add_executable(main.c
        temperature.h
        temperature.c
        main.c)
