#ifndef cardDrawing_h
#define cardDrawing_h
#include <iostream>
#include <vector>
#include <string>
#include <random>

class cardDrawing {
    private:
const std::vector<std::string> cardValues 
{ "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    std::string cardValue {};
    const std::vector<std::string>
    cardTypes {"Hearts", "Diamonds", "Spades", "Clubs"};
    std::string cardType {};
    

    public:
    cardDrawing(const std::vector<std::string> cardValues, const std::vector<std::string> cardTypes) {};
    
    std::string getCardValue() {
    };

};

#endif