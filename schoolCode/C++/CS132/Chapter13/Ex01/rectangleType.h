#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>

class rectangleType {
    friend std::ostream& operator<<(std::ostream&, const rectangleType&);
    friend std::istream& operator>>(std::istream&, rectangleType&);

protected:
    int length;
    int width;

public:
    // Constructor
    rectangleType(int len = 0, int wid = 0);

    // Set and get dimensions
    void setSize(int len, int wid);
    void getSize(int& len, int& wid) const;

    // Overloaded increment and decrement operators
    rectangleType operator++();      // Pre-increment
    rectangleType operator++(int);   // Post-increment
    rectangleType operator--();      // Pre-decrement
    rectangleType operator--(int);   // Post-decrement

    // Overloaded subtraction operator
    rectangleType operator-(const rectangleType& otherRect) const;

    // Overloaded addition operator
    rectangleType operator+(const rectangleType& otherRect) const;

    // Overloaded multiplication operator
    rectangleType operator*(const rectangleType& otherRect) const;

    // Overloaded relational operators based on area
    bool operator==(const rectangleType& otherRect) const;
    bool operator!=(const rectangleType& otherRect) const;
    bool operator<(const rectangleType& otherRect) const;
    bool operator>(const rectangleType& otherRect) const;
    bool operator<=(const rectangleType& otherRect) const;
    bool operator>=(const rectangleType& otherRect) const;
};

#endif
