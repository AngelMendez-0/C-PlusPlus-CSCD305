cmake_minimum_required(VERSION 3.30)
project(MendezA_L2)

set(CMAKE_CXX_STANDARD 20)

add_executable(MendezA_L2 Airspace.cpp interception_tester.cpp Point3D.cpp Radar.cpp)
