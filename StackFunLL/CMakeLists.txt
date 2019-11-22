cmake_minimum_required(VERSION 3.14)
project(StackFunLL C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(StackFunLL
        stack_ll.c
        stack_ll.h driver.c fake_picture.txt)
