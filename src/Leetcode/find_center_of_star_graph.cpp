#include "../headers/find_center_of_star_graph.h"

#include <map>
using std::vector;

int find_center_of_star_graph::findCenter(vector<vector<int>>& edges) {
    std::map<int, std::vector<int>> map;

    int a = edges[0][0], b = edges[0][1];
    int c = edges[1][0], d = edges[1][1];

    if (a == c || a == d) return a;
    return b;
}