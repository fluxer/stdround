cmake_minimum_required(VERSION 3.4 FATAL_ERROR)

project(stdround_test C CXX)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_executable(stdround_test_c stdround_test.c)

add_executable(stdround_test_cpp stdround_test.cpp)
