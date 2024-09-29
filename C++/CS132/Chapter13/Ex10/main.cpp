#include <iostream>
#include "fractionType.h"
#include "fractionType.cpp"

int main() {
    fractionType x, y, z;

    std::cout << "Enter fraction x:\n";
    std::cin >> x;

    std::cout << "Enter fraction y:\n";
    std::cin >> y;

    // Test arithmetic operations
    std::cout << "x + y = " << x + y << std::endl;
    std::cout << "x - y = " << x - y << std::endl;
    std::cout << "x * y = " << x * y << std::endl;
    std::cout << "x / y = " << x / y << std::endl;

    // Test relational operators
    if (x == y)
        std::cout << "x and y are equal." << std::endl;
    else
        std::cout << "x and y are not equal." << std::endl;

    if (x < y)
        std::cout << "x is less than y." << std::endl;
    else if (x > y)
        std::cout << "x is greater than y." << std::endl;

    return 0;
}
