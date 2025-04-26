#include "../headers/minimum_rounds_to_complete_all_tasks.h"

#include <algorithm>
#include <unordered_map>
using std::sort;
//[2,2,2,3,3,4,4,4,4,4]

int minimum_rounds_to_complete_all_tasks::minimumRounds(vector<int> &tasks) {
    std::unordered_map<int, int> t_map;
    sort(tasks.begin(), tasks.end());
    for (int task : tasks) {
        t_map[task]++;
    }

    int result = 0;

    for (auto map: t_map) {
        if(map.second == 1 ) {
            return -1;
        }
        if (map.second % 3 == 0) {
            result += map.second / 3;
        } else {
            result += map.second / 3 + 1;
        }
    }

    return result;
}