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
        src/headers/find_center_of_star_graph.h
        src/Leetcode/find_the_town_judge.cpp
        src/headers/find_the_town_judge.h
        src/Leetcode/find_first_and_last_position_of_element_in_sorted_array.cpp
        src/headers/find_first_and_last_position_of_element_in_sorted_array.h
        src/Leetcode/reverse_integer.cpp
        src/headers/reverse_integer.h
        src/Leetcode/merge_two_sorted_lists.cpp
        src/headers/merge_two_sorted_lists.h
        src/Leetcode/merge_k_sorted_lists.cpp
        src/headers/merge_k_sorted_lists.h
        src/Leetcode/linked_list_cycle.cpp
        src/headers/linked_list_cycle.h
        src/Leetcode/find_the_difference.cpp
        src/headers/find_the_difference.h
)
