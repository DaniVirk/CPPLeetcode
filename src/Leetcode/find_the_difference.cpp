#include "../headers/find_the_difference.h"

#include <algorithm>

char find_the_difference::findTheDifference(string s, string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != t[i]) {
            return t[i];
        }
    }

    return t.back();
}
