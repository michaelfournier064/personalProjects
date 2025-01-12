#include <iostream>
#include <iomanip>
#include <string>
#include "invalidHr.h"
#include "invalidMin.h"
#include "invalidSec.h"

class Time {
public:
    int hours{};
    int minutes{};
    int seconds{};
    std::string AmPm{};

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void timeInput() {
        std::cout << "Please enter the time you want converted from 12-hour format to 24-hour format (HH MM SS): ";
        std::cin >> hours >> minutes >> seconds;
        try {
            timeValidation(hours, minutes, seconds);
        } catch (const invalidHr& e) {
            std::cerr << e.what() << std::endl;
            return;
        } catch (const invalidMin& e) {
            std::cerr << e.what() << std::endl;
            return;
        } catch (const invalidSec& e) {
            std::cerr << e.what() << std::endl;
            return;
        }
        AmPmInput();
    }

    void timeValidation(int hours, int minutes, int seconds) {
        if (hours < 0 || hours > 12) {
            throw invalidHr(hours);
        }
        if (minutes < 0 || minutes > 59) {
            throw invalidMin(minutes);
        }
        if (seconds < 0 || seconds > 59) {
            throw invalidSec(seconds);
        }
    }

    void AmPmInput() {
        std::cout << "Is the time you wish to be converted AM or PM (enter AM for AM and PM for PM): ";
        std::cin >> AmPm;
        AmPmValidation(AmPm);
    }

    void AmPmValidation(const std::string& AmPm) {
        if (AmPm != "AM" && AmPm != "PM") {
            std::cout << "You have failed to select a valid period within the day! Ensure you enter AM for AM and PM for PM" << std::endl;
            AmPmInput();
        } else {
            timeConversion();
        }
    }

    void timeConversion() {
        if (AmPm == "PM" && hours != 12) {
            hours += 12;
        } else if (AmPm == "AM" && hours == 12) {
            hours = 0;
        }
        timeOutput();
    }

    void timeOutput() const {
        std::cout << "The time in 24-hour format is: "
                  << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }
};

int main() {
    Time t(0, 0, 0);
    t.timeInput();
    return 0;
}
