#include "../headers/minimum_rounds_to_complete_all_tasks.h"

#include <algorithm>
#include <unordered_map>
using std::sort;
//[2,2,2,3,3,4,4,4,4,4]

int minimum_rounds_to_complete_all_tasks::minimumRounds(vector<int> &tasks) {
    std::unordered_map<int, int> t_map;

    for (int & task : tasks) {
        if (t_map.contains(task)) {
            t_map[task]++;
        } else {
            t_map.insert({task, 1});
        }
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