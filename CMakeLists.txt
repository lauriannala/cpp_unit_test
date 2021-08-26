cmake_minimum_required(VERSION 3.20)
project(main)

set(CMAKE_CXX_STANDARD 23)

add_executable(main main.cpp src/test_class.h src/test_class.cpp)
