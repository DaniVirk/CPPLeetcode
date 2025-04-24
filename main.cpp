#include <chrono>
#include <iostream>
using namespace std;

int main() {

    const auto start = chrono::high_resolution_clock::now();
    cout << "" << endl;
    const auto end = chrono::high_resolution_clock::now();
    const auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Execution time: " << duration.count() << " milliseconds" << endl;
    return 0;
}