cmake_minimum_required(VERSION 3.30)
project(Assignment4_Solution)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Assignment4_Solution
        Graph.cpp
        Graph.h
        graph_tester.cpp
        Point3D.cpp
        Point3D.h
)

configure_file(Terrain.obj Terrain.obj COPYONLY)