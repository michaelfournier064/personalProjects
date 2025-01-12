#ifndef INVALIDSEC_H
#define INVALIDSEC_H

#include <iostream>
#include <stdexcept>

class invalidSec : public std::invalid_argument {
public:
    invalidSec(int s) : std::invalid_argument("Invalid seconds: " + std::to_string(s) + ". Ensure the value of seconds is between 0 and 59.") {}
};

#endif // INVALIDSEC_H
