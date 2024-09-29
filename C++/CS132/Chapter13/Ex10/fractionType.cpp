#include "fractionType.h"

// Constructor
fractionType::fractionType(int numer, int denom) {
    if (denom == 0) {
        std::cerr << "Denominator cannot be 0. Setting denominator to 1.\n";
        this->denominator = 1;
    } else {
        this->numerator = numer;
        this->denominator = denom;
        simplify();
    }
}

// GCD function to simplify fractions
int fractionType::gcd(int a, int b) const {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Simplify the fraction
void fractionType::simplify() {
    int gcdValue = gcd(numerator, denominator);
    numerator /= gcdValue;
    denominator /= gcdValue;

    // Ensure the denominator is positive
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

// Arithmetic operator overloading
fractionType fractionType::operator+(const fractionType& other) const {
    int numer = numerator * other.denominator + denominator * other.numerator;
    int denom = denominator * other.denominator;
    return fractionType(numer, denom);
}

fractionType fractionType::operator-(const fractionType& other) const {
    int numer = numerator * other.denominator - denominator * other.numerator;
    int denom = denominator * other.denominator;
    return fractionType(numer, denom);
}

fractionType fractionType::operator*(const fractionType& other) const {
    int numer = numerator * other.numerator;
    int denom = denominator * other.denominator;
    return fractionType(numer, denom);
}

fractionType fractionType::operator/(const fractionType& other) const {
    if (other.numerator == 0) {
        std::cerr << "Division by zero fraction is undefined. Returning the original fraction.\n";
        return *this;
    }
    int numer = numerator * other.denominator;
    int denom = denominator * other.numerator;
    return fractionType(numer, denom);
}

// Relational operator overloading
bool fractionType::operator==(const fractionType& other) const {
    return numerator * other.denominator == denominator * other.numerator;
}

bool fractionType::operator!=(const fractionType& other) const {
    return !(*this == other);
}

bool fractionType::operator<(const fractionType& other) const {
    return numerator * other.denominator < denominator * other.numerator;
}

bool fractionType::operator<=(const fractionType& other) const {
    return *this < other || *this == other;
}

bool fractionType::operator>(const fractionType& other) const {
    return !(*this <= other);
}

bool fractionType::operator>=(const fractionType& other) const {
    return !(*this < other);
}

// Stream insertion (output)
std::ostream& operator<<(std::ostream& os, const fractionType& frac) {
    os << frac.numerator << "/" << frac.denominator;
    return os;
}

// Stream extraction (input)
std::istream& operator>>(std::istream& is, fractionType& frac) {
    std::cout << "Enter numerator: ";
    is >> frac.numerator;

    do {
        std::cout << "Enter denominator (cannot be zero): ";
        is >> frac.denominator;
    } while (frac.denominator == 0);

    frac.simplify();
    return is;
}
