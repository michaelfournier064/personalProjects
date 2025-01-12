#include <iostream>
#include "rectangleType.h"
#include "rectangleType.cpp"

int main() {
    rectangleType rect1(4, 5);
    rectangleType rect2(2, 3);
    
    // Output initial dimensions
    std::cout << "Rectangle 1: " << rect1 << std::endl;
    std::cout << "Rectangle 2: " << rect2 << std::endl;

    // Test addition
    rectangleType rect3 = rect1 + rect2;
    std::cout << "Addition: " << rect3 << std::endl;

    // Test subtraction
    rectangleType rect4 = rect1 - rect2;
    std::cout << "Subtraction: " << rect4 << std::endl;

    // Test multiplication
    rectangleType rect5 = rect1 * rect2;
    std::cout << "Multiplication: " << rect5 << std::endl;

    // Test increment and decrement
    ++rect1;
    std::cout << "After pre-increment: " << rect1 << std::endl;
    rect1++;
    std::cout << "After post-increment: " << rect1 << std::endl;
    --rect1;
    std::cout << "After pre-decrement: " << rect1 << std::endl;
    rect1--;
    std::cout << "After post-decrement: " << rect1 << std::endl;

    // Test relational operators
    if (rect1 == rect2) {
        std::cout << "Rectangles are equal." << std::endl;
    } else {
        std::cout << "Rectangles are not equal." << std::endl;
    }

    if (rect1 < rect2) {
        std::cout << "Rectangle 1 is smaller than Rectangle 2." << std::endl;
    } else {
        std::cout << "Rectangle 1 is not smaller than Rectangle 2." << std::endl;
    }

    return 0;
}
