#include "circleType.h"
#include <cmath>

circleType::circleType() : radius(0.0) {}

circleType::circleType(double r) {
    if (r >= 0) {
        radius = r;
    } else {
        radius = 0; 
    }
}

double circleType::getRadius() const {
    return radius;
}

void circleType::setRadius(double r) {
    if (r >= 0) {
        radius = r;
    } else {
        radius = 0; 
    }
}

double circleType::area() const {
    return M_PI * radius * radius;
}

double circleType::circumference() const {
    return 2 * M_PI * radius;
}

circleType::~circleType() {
}
