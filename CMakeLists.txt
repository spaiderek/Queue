cmake_minimum_required(VERSION 3.28)
project(queue)

set(CMAKE_CXX_STANDARD 26)

add_executable(queue main.cpp
        gueue.h
        gueue.cpp)
