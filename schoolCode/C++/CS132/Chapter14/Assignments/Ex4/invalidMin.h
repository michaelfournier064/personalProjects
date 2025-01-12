#ifndef INVALIDMIN_H
#define INVALIDMIN_H

#include <iostream>
#include <stdexcept>

class invalidMin : public std::invalid_argument {
public:
    invalidMin(int m) : std::invalid_argument("Invalid minutes: " + std::to_string(m) + ". Ensure the value of minutes is between 0 and 59.") {}
};

#endif // INVALIDMIN_H
