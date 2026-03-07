cmake_minimum_required(VERSION 4.1)
project(simple_bank_account C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(simple_bank_account
        account.h
        main.c
        account.c)
