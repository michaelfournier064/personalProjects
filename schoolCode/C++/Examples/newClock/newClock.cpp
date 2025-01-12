#include "newClock.h"

clockType::clockType(int hours, int minutes, int seconds)
{
    setTime(hours, minutes, seconds);
}

void clockType::setTime(int hours, int minutes, int seconds) {
    if (hours < 0 || minutes < 0 || seconds < 0 || hours > 23 || minutes > 59 || seconds > 59) {
        std::cout << "Invalid time values. Hours must be 0-23, minutes and seconds must be 0-59." << std::endl;
    }
    else {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const {
    hours = this->hours;
    minutes = this->minutes;
    seconds = this->seconds;
}

clockType clockType::operator++()
{
    ++seconds;
    if (seconds >= 60)
    {
        seconds = 0;
        ++minutes;
        if (minutes >= 60)
        {
            minutes = 0;
            ++hours;
            if (hours >= 24)
            {
                hours = 0;
                std::cout << "The day has changed." << std::endl;
            }
        }
    }
    return *this;
}

bool clockType::operator==(const clockType& otherClock) const
{
    return (hours == otherClock.hours) && (minutes == otherClock.minutes) && (seconds == otherClock.seconds);
}

std::ostream& operator<<(std::ostream& os, const clockType& clock) {
    os << clock.hours << ":" << clock.minutes << ":" << clock.seconds;
    return os;
}

std::istream& operator>>(std::istream& is, clockType& clock) {
    is >> clock.hours >> clock.minutes >> clock.seconds;
    return is;
}
