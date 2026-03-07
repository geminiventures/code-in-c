cmake_minimum_required(VERSION 4.1)
project(constructor_patterns C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(constructor_patterns
        book.c
        book.h
        main.c)
