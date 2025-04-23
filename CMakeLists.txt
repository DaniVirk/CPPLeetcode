cmake_minimum_required(VERSION 3.31)
project(CPPLeetcode)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPPLeetcode main.cpp
        src/Leetcode/longest_valid_parentheses.cpp
        src/headers/longest_valid_parentheses.h
        src/Leetcode/remove_duplicates_from_sorted_list.cpp
        src/headers/remove_duplicates_from_sorted_list.h
        src/helper/ListNode.h
        src/Leetcode/find_center_of_star_graph.cpp
        src/headers/find_center_of_star_graph.h)
