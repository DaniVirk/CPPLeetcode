#include "../headers/reverse_integer.h"
#include <string>

int reverse_integer::reverse(int x) {
    const std::string x_string = std::to_string(x);
    std::string x_reversed;
    int start_index = 0;

    if (x_string[0] == '-') {
        x_reversed = "-";
        start_index = 1;
    }

    for (int i = x_string.size() - 1; i >= start_index; --i) {
        x_reversed += x_string[i];
    }

    try {
        return std::stoi(x_reversed);
    } catch (...) {
        return 0;
    }
}