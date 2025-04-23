#include <chrono>
#include <iostream>

using std::cout;

int main() {

    auto start = std::chrono::high_resolution_clock::now();

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Execution time: " << duration.count() << " milliseconds" << std::endl;
    return 0;
}