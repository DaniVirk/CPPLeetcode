#include "../headers/longest_substring_without_repeating_characters.h"
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using std::string;
using std::vector;
using std::unordered_map;
using std::unordered_set;
using std::max;

int longest_substring_without_repeating_characters::lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxLength = 0;
    unordered_set<char> charSet;
    int left = 0;

    for (int right = 0; right < n; right++) {
        if (charSet.count(s[right]) == 0) {
            charSet.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        } else {
            while (charSet.count(s[right])) {
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
        }
    }

    return maxLength;
}



int old(string s) {

    if(s.size() == 0 || s.size() == 1) {
        return s.size();
    }

    unordered_map<string, int> map;

    for (int i = 0; i < s.size(); ++i) {
        const char c = s[i];
        string sub_string;
        sub_string.push_back(c);

        for (int j = i+1; j < s.size(); j++) {
            string second_s;
            second_s.push_back(s[j]);

            if (const int founded = sub_string.find(second_s); founded != string::npos) {
                map.insert({sub_string, sub_string.size()});
                break;
            }

            sub_string.push_back(s[j]);
        }

        map.insert({sub_string, sub_string.size()});
    }

    int result = 0;
    for (const auto& sub : map) {
        if (sub.second > result) {
            result = sub.second;
        }
    }

    return result;
}