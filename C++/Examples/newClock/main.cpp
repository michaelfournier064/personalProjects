#include "newClock.h"
#include <iostream>

int main() {
    clockType myClock;

    // Input time
    std::cout << "Enter time in format: hours minutes seconds (e.g., 14 30 45): ";
    std::cin >> myClock;

    // Display the entered time
    std::cout << "You entered: " << myClock << std::endl;

    // Increment the time by 1 second
    std::cout << "Incrementing time by 1 second..." << std::endl;
    ++myClock;

    // Display the updated time
    std::cout << "Updated time: " << myClock << std::endl;

    // Comparison example
    clockType otherClock(12, 0, 0);
    if (myClock == otherClock) {
        std::cout << "The time matches 12:00:00." << std::endl;
    } else {
        std::cout << "The time does not match 12:00:00." << std::endl;
    }

    return 0;
}
