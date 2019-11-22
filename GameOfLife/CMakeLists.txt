cmake_minimum_required(VERSION 3.14)
project(GameOfLife C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(GameOfLife
        life.h
        life_driver.c life.c world.txt)
