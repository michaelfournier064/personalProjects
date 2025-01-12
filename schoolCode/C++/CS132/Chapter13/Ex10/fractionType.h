#ifndef fractionType_h
#define fractionType_h

#include <iostream>

class fractionType {
    // Friend functions for stream operators
    friend std::ostream& operator<<(std::ostream& os, const fractionType& frac);
    friend std::istream& operator>>(std::istream& is, fractionType& frac);

public:
    // Constructor
    fractionType(int numerator = 0, int denominator = 1);

    // Arithmetic operator overloading
    fractionType operator+(const fractionType& other) const;
    fractionType operator-(const fractionType& other) const;
    fractionType operator*(const fractionType& other) const;
    fractionType operator/(const fractionType& other) const;

    // Relational operator overloading
    bool operator==(const fractionType& other) const;
    bool operator!=(const fractionType& other) const;
    bool operator<(const fractionType& other) const;
    bool operator<=(const fractionType& other) const;
    bool operator>(const fractionType& other) const;
    bool operator>=(const fractionType& other) const;

private:
    int numerator;
    int denominator;

    void simplify(); // Helper function to simplify fractions
    int gcd(int a, int b) const; // Helper function to calculate gcd
};

#endif
