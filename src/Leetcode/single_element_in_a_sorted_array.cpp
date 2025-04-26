#include "../headers/single_element_in_a_sorted_array.h"

#include <unordered_map>

int single_element_in_a_sorted_array::singleNonDuplicate(std::vector<int> &nums) {
    std::unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); ++i) {
        if (mp.contains(nums[i])) {
            mp[nums[i]]++;
        } else {
            mp.insert({nums[i], 1});
        }
    }

    for (auto m: mp) {
        if (m.second == 1) return m.first;
    }

    return 0;
}
