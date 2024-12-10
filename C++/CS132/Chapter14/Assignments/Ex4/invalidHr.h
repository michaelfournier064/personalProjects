#ifndef INVALIDHR_H
#define INVALIDHR_H

#include <iostream>
#include <stdexcept>

class invalidHr : public std::invalid_argument {
public:
    invalidHr(int h) : std::invalid_argument("Invalid hours: " + std::to_string(h) + ". Ensure the value of hours is between 0 and 12.") {}
};

#endif // INVALIDHR_H
