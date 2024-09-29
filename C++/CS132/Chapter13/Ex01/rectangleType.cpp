#include "rectangleType.h"

// Constructor
rectangleType::rectangleType(int len, int wid) {
    this->setSize(len, wid);
}

// Set size
void rectangleType::setSize(int len, int wid) {
    if (len < 0 || wid < 0) {
        std::cout << "Inputted dimensions not valid." << std::endl;
    } else {
        this->length = len;
        this->width = wid;
    }
}

// Get size
void rectangleType::getSize(int& len, int& wid) const {
    len = this->length;
    wid = this->width;
}

// Prefix increment
rectangleType rectangleType::operator++() {
    ++this->length;
    ++this->width;
    return *this;
}

// Postfix increment
rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    ++(*this);
    return temp;
}

// Prefix decrement
rectangleType rectangleType::operator--() {
    if (this->length > 1 && this->width > 1) {
        --this->length;
        --this->width;
    } else {
        std::cout << "Dimensions must remain positive." << std::endl;
    }
    return *this;
}

// Postfix decrement
rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;
    --(*this);
    return temp;
}

// Addition operator
rectangleType rectangleType::operator+(const rectangleType& otherRect) const {
    return rectangleType(this->length + otherRect.length, this->width + otherRect.width);
}

// Subtraction operator
rectangleType rectangleType::operator-(const rectangleType& otherRect) const {
    int newLength = this->length - otherRect.length;
    int newWidth = this->width - otherRect.width;

    if (newLength <= 0 || newWidth <= 0) {
        std::cout << "Resulting dimensions must be positive. Operation not performed." << std::endl;
        return *this;  // Return the current rectangle
    }
    return rectangleType(newLength, newWidth);
}

// Multiplication operator
rectangleType rectangleType::operator*(const rectangleType& otherRect) const {
    return rectangleType(this->length * otherRect.length, this->width * otherRect.width);
}

// Equality operator
bool rectangleType::operator==(const rectangleType& otherRect) const {
    return (this->length == otherRect.length) && (this->width == otherRect.width);
}

// Inequality operator
bool rectangleType::operator!=(const rectangleType& otherRect) const {
    return !(*this == otherRect);
}

// Less than operator (based on area)
bool rectangleType::operator<(const rectangleType& otherRect) const {
    return (this->length * this->width) < (otherRect.length * otherRect.width);
}

// Greater than operator (based on area)
bool rectangleType::operator>(const rectangleType& otherRect) const {
    return (this->length * this->width) > (otherRect.length * otherRect.width);
}

// Less than or equal to operator (based on area)
bool rectangleType::operator<=(const rectangleType& otherRect) const {
    return (this->length * this->width) <= (otherRect.length * otherRect.width);
}

// Greater than or equal to operator (based on area)
bool rectangleType::operator>=(const rectangleType& otherRect) const {
    return (this->length * this->width) >= (otherRect.length * otherRect.width);
}

// Stream insertion operator
std::ostream& operator<<(std::ostream& os, const rectangleType& rect) {
    os << "Length: " << rect.length << ", Width: " << rect.width;
    return os;
}

// Stream extraction operator
std::istream& operator>>(std::istream& is, rectangleType& rect) {
    is >> rect.length >> rect.width;
    return is;
}
