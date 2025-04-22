cmake_minimum_required(VERSION 3.31)
project(CPPLeetcode)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPPLeetcode main.cpp
        src/Leetcode/longest_valid_parentheses.cpp
        src/headers/longest_valid_parentheses.h)
