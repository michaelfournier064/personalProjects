#include <iostream>
#include <string>

class divisionByZero {
    public:
    divisionByZero () {
        message = "Division by zero!";
    }
    divisionByZero (std::string str) {
        message = str;
    }
    std::string what() {
        return message;
    }

    ~divisionByZero();

    private:
    std::string message;
};