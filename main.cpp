#include <chrono>
#include <iostream>

#include "src/headers/minimum_rounds_to_complete_all_tasks.h"
#include "src/headers/single_element_in_a_sorted_array.h"
using namespace std;

int main() {

    const auto start = chrono::high_resolution_clock::now();
    vector test = {8,8,8,7,7,7,6,6,6,4};
    cout << single_element_in_a_sorted_array::singleNonDuplicate(test) << endl;
    const auto end = chrono::high_resolution_clock::now();
    const auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Execution time: " << duration.count() << " milliseconds" << endl;
    return 0;
}