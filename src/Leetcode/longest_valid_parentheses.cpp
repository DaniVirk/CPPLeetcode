#include "../headers/longest_valid_parentheses.h"
#include<bits/stdc++.h>

int longest_valid_parentheses::longestValidParentheses(const std::string &s) {
    std::stack<int> stack;
    stack.push(-1);
    int result = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            stack.push(i);
        } else {
            stack.pop();
            if (stack.empty()) {
                stack.push(i);
            } else {
                result = std::max(result, i - stack.top());
            }
        }
    }

    return result;
}