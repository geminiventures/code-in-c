cmake_minimum_required(VERSION 4.1)
project(destructor_patterns C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(destructor_patterns
        main.c
        movie.c
        movie.h)
