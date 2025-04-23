#include <iostream>

#include "src/headers/find_center_of_star_graph.h"
#include "src/headers/find_the_town_judge.h"
#include "src/headers/remove_duplicates_from_sorted_list.h"
#include "src/helper/ListNode.h"

using std::cout;

int main() {

    find_the_town_judge test;
    std::vector<std::vector<int>> edges = {{1, 3}, {2, 3}, {3, 1}};

    cout << test.findJudge(3, edges) << std::endl;
    return 0;
}
