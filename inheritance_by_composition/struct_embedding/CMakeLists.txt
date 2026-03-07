cmake_minimum_required(VERSION 4.1)
project(struct_embedding C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(struct_embedding
        main.c
        types.c
        types.h)
