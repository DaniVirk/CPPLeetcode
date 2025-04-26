#include <chrono>
#include <iostream>

#include "src/headers/minimum_rounds_to_complete_all_tasks.h"
using namespace std;

int main() {

    const auto start = chrono::high_resolution_clock::now();
    minimum_rounds_to_complete_all_tasks find;
    vector test = {8,8,8,7,7,7,6,6,6};
    cout << find.minimumRounds(test) << endl;
    const auto end = chrono::high_resolution_clock::now();
    const auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Execution time: " << duration.count() << " milliseconds" << endl;
    return 0;
}