#include "../headers/contains_duplicate.h"

#include <unordered_map>

bool contains_duplicate::hasDuplicate(vector<int> &nums) {
    std::unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); ++i) {
        if (mp.find(nums[i]) != mp.end()) {
            return true;
        }
        mp[nums[i]]++;
    }

    return false;
}