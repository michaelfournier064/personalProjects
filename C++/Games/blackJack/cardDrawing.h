#ifndef cardDrawing_h
#define cardDrawing_h
#include <iostream>
#include <array>
#include <string>
#include <random>
#include <ctime>

class cardDrawing {
    private:
const std::array<std::string, 13> cardValues
{ "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    std::string cardValue {};
    const std::array
<std::string, 4>
    cardTypes {"Hearts", "Diamonds", "Spades", "Clubs"};
    std::string cardType {};
    
    public:

    cardDrawing() {
        std::srand(std::time(0)); // Seed for randomness
    };
    
    std::string getCardValue() {
        cardType = cardTypes[std::rand() % cardTypes.size()];
        cardValue = cardValues[std::rand() % cardValues.size()];
    };
};

#endif