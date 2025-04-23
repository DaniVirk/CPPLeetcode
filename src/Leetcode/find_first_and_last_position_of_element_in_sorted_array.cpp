#include "../headers/find_first_and_last_position_of_element_in_sorted_array.h"

#include <iostream>
#include <ostream>

vector<int> find_first_and_last_position_of_element_in_sorted_array::searchRange(vector<int> &nums, int target) {
    vector<int> result;

    while (nums.size() > 0) {
        int lenght = nums.size();
        std::cout << lenght << std::endl;

        int temp_result = nums[lenght/2];

        std::cout << "Temp:: " << temp_result << std::endl;

        if (temp_result == target) {
            result.push_back(temp_result);
            nums.erase(nums.begin() + temp_result);
        }

        if (temp_result < target) {
            nums.erase(nums.begin(), nums.begin() + temp_result);
        }

        if (temp_result > target) {
            nums.erase(nums.begin() + temp_result, nums.end());
        }
    }

    return result;
}
