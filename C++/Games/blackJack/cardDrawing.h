#ifndef cardDrawing_h
#define cardDrawing_h

#include <iostream>
#include <array>
#include <string>
#include <random>
#include <ctime>

class cards {
private:
    const std::array<std::string, 13> cardValues{
        "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    const std::array<std::string, 4> cardTypes{
        "Hearts", "Diamonds", "Spades", "Clubs"};
    std::string cardValue{};
    std::string cardType{};

public:
    void generateCard() {
        // Generate random card type and value
        cardType = cardTypes[std::rand() % cardTypes.size()];
        cardValue = cardValues[std::rand() % cardValues.size()];
    }

    void cardDrawing() {
        generateCard();
        std::cout << "Your card is a " << cardValue << " of " << cardType << "." << std::endl;
    }
};

#endif
