#include <iostream>
#include <iomanip>


int main() {
    std::cout << std::fixed << std::setprecision(2);

    int lengthInches{};
    int lengthFeet{};
    double lengthCentimeters{};

    try {
        std::cout << "Enter a length in feet: ";
        std::cin >> lengthFeet;
        if (lengthFeet < 0) {
            throw lengthFeet;
        }

        std::cout << "\nEnter a length in inches: ";
        std::cin >> lengthInches;
        if (lengthInches < 0) {
            throw lengthInches;
        }
        lengthCentimeters = (lengthInches * 2.54) + (lengthFeet * 30.48);
        std::cout << "The entered length converted to centimeters is: " << lengthCentimeters << std::endl;
    }
    catch (int length) {
        std::cout << "A non positive number is entered" << std::endl;
    }

    return 0;
}
