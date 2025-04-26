#include "../headers/average_value_of_even_numbers_that_are_divisible_by_three.h"

int average_value_of_even_numbers_that_are_divisible_by_three::averageValue(vector<int> &nums) {
    int number = 0;
    int counter = 0;

    for (const int num : nums) {
        if (num % 3 == 0 && num % 2 == 0) {
            number += num;
            counter++;
        }
    }
    if (counter == 0)  return number;
    return number / counter;
}