cmake_minimum_required(VERSION 3.21)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp course.cpp course.h Person.cpp Person.h Student.cpp Student.h Professor.cpp Professor.h University.cpp University.h)
