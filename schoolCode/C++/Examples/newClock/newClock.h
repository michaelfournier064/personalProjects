#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

#include <iostream>

class clockType
{
    // Friend functions for stream insertion and extraction
    friend std::ostream& operator<<(std::ostream&, const clockType&);
    friend std::istream& operator>>(std::istream&, clockType&);

public:
    // Public member functions
    void setTime(int hours, int minutes, int seconds);
    void getTime(int& hours, int& minutes, int& seconds) const;

    // Operator overloading functions
    clockType operator++(); // Prefix increment
    bool operator==(const clockType& otherClock) const;
    bool operator!=(const clockType& otherClock) const;
    bool operator<=(const clockType& otherClock) const;
    bool operator<(const clockType& otherClock) const;
    bool operator>=(const clockType& otherClock) const;
    bool operator>(const clockType& otherClock) const;

    // Constructor
    clockType(int hours = 0, int minutes = 0, int seconds = 0);

private:
    // Private data members
    int hours;
    int minutes;
    int seconds;
};

#endif // CLOCKTYPE_H
