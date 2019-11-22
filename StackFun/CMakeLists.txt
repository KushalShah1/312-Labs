cmake_minimum_required(VERSION 3.14)
project(StackFun)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(StackFun
        fake_picture.txt
        stack_arr.h
        stack_arr.c driver.c)
