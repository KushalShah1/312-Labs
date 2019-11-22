cmake_minimum_required(VERSION 3.14)
project(UTPod)

set(CMAKE_CXX_STANDARD 14)

add_executable(UTPod main.cpp Song.cpp UTPod.cpp UtPodDriver.cpp)