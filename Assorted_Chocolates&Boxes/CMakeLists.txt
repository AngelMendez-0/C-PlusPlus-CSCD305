cmake_minimum_required(VERSION 4.2)
project(Assignment3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Assignment3
        Chocolate.cpp
        Chocolate.h
        Chocolatebox.cpp
        Chocolatebox.h
        test_chocolate_box.cpp)
