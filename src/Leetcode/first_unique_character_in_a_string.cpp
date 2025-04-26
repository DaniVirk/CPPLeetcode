#include "../headers/first_unique_character_in_a_string.h"

#include <algorithm>
#include <map>

int first_unique_character_in_a_string::firstUniqChar(string s) {
    std::map<char, int> matched;

    for (char & i : s) {
        matched[i]++;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (matched[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}
