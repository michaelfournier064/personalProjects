#include <iostream>
#include "divisionByZero.h"

int main () {
    int dividend{};
    int divisor{};
    int quotient{};

    try {
        std::cout << "Line 10: Enter the dividend: ";
        std::cin >> dividend;
        std::cout << std::endl;

        std::cout << "Line 14: Enter the divisor: ";
        std::cin >> divisor;
        std::cout << std::endl;

        if (divisor == 0) {
            throw divisionByZero("You ate a zero");
        }
        
        quotient = dividend / divisor;

        std::cout << "Line 19: Quotient = " << quotient << std::endl;
    }
    catch (divisionByZero divByZeroObj) {
        std::cout << "Line 23: Division by zero!" << "catch block: " << divByZeroObj.what() <<std::endl;
    }

    return 0;
}