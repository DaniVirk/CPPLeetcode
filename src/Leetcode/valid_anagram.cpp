#include "../headers/valid_anagram.h"

#include <algorithm>

bool valid_anagram::isAnagram(string s, string t) {
    std::sort(t.begin(), t.end());
    std::sort(s.begin(), s.end());
    if (s == t) return true;
    return false;
}


