#include "headers/longest_valid_parentheses.h"

int longest_valid_parentheses::longestValidParentheses(std::string s) {
    int result = 0;
    int temp_result = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(' && s.length() != i) {
            if (s[i+1] == ')') {
                temp_result = temp_result+2;
                i++;
            }
        } else {
            if (result < temp_result) {
                result = temp_result;
            }
            temp_result = 0;
        }
    }

    if (result < temp_result) {
        result = temp_result;
    }
    return result;
}