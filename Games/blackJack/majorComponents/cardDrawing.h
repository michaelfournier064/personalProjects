#ifndef CARD_DRAWING_H
#define CARD_DRAWING_H

#include <array>
#include <iostream>
#include <random>

class Card {
private:
    const std::array<std::string, 13> cardValues{
        "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"
    };
    const std::array<std::string, 4> cardTypes{
        "Hearts", "Diamonds", "Spades", "Clubs"
    };
    std::string cardValue{};
    std::string cardType{};

public:
    void generateCard() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        std::uniform_int_distribution<std::size_t> valueDist(0, cardValues.size() - 1);
        std::uniform_int_distribution<std::size_t> typeDist(0, cardTypes.size() - 1);

        cardType = cardTypes[typeDist(gen)];
        cardValue = cardValues[valueDist(gen)];
    }

    std::string getCard() const {
        return cardValue + " of " + cardType;
    }
};


#endif