#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

class circleType {
private:
    double radius;

public:
    circleType();
    circleType(double r);

    double getRadius() const;

    void setRadius(double r);

    double area() const;
    double circumference() const;

    ~circleType();
};

#endif
