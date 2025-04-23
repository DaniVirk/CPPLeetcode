#include "../headers/find_the_town_judge.h"

#include <vector>
using std::vector;

int find_the_town_judge::findJudge(int n, vector<vector<int>>& trust) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    vector trust_count(n + 1, 0);

    for (auto& t : trust) {
        trust_count[t[0]]--;
        trust_count[t[1]]++;
    }

    for (int i = 1; i <= n; ++i) {
        if (trust_count[i] == n - 1) return i;

    }
    return -1;
}