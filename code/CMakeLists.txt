cmake_minimum_required(VERSION 4.2)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c
        helpers.c
        problem1.c
        problem1.h
        helpers.h
)
