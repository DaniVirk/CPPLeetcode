#include <iostream>

#include "src/headers/longest_valid_parentheses.h"

int main() {
    longest_valid_parentheses lvp;

    const int test = lvp.longestValidParentheses(")()())");

    std::cout << test << std::endl;
    return 0;
}
