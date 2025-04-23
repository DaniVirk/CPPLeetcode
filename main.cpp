#include <iostream>

#include "src/headers/find_center_of_star_graph.h"
#include "src/headers/remove_duplicates_from_sorted_list.h"
#include "src/helper/ListNode.h"

using std::cout;

int main() {

    find_center_of_star_graph test;

    std::vector<std::vector<int>> edges = {{1, 2}, {2, 3}, {4, 2}, {5,2}, {6,2}};

    cout << test.findCenter(edges) << std::endl;
    return 0;
}
