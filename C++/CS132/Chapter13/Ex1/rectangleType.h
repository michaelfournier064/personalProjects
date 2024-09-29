#ifndef H_rectangleType
#define H_rectangleType

#include <iostream>
using namespace std;

class rectangleType
{
//Overload the stream insertion and extraction operators
friend ostream& operator<<(ostream&, const rectangleType &);
friend istream& operator>>(istream&, rectangleType &);

public:
void setDimension(double l, double w);
double getLength() const;
double getWidth() const;
double area() const;
double perimeter() const;

//Overload the arithmetic operators (part b)
rectangleType operator + (const rectangleType &) const;
rectangleType operator - (const rectangleType &) const;
rectangleType operator * (const rectangleType&) const;

//Overload the increment and decrement operators (part a)
rectangleType operator ++ (); //pre-increment
rectangleType operator ++ (int); //post-increment
rectangleType operator -- (); //pre-decrement
rectangleType operator -- (int); //post-decrement

//Overload the relational operators (part c)
bool operator == (const rectangleType&) const;
bool operator != (const rectangleType&) const;
bool operator <= (const rectangleType&) const;
bool operator < (const rectangleType&) const;
bool operator >= (const rectangleType&) const;
bool operator > (const rectangleType&) const;

//constructors
rectangleType();
rectangleType(double l, double w);

protected:
double length;
double width;
};

#endif