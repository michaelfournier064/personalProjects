#ifndef ASSISTING_FUNCTIONS_H
#define ASSISTING_FUNCTIONS_H

#include <random>
#include <stdexcept>
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>

class Auxiliary {
private:
    // Stores the cards for each player, including the dealer
    std::unordered_map<int, std::vector<std::string>> playerHands;

public:
    void addCardToPlayer(int playerId, const std::string& card) {
        playerHands[playerId].push_back(card);
    }

    // Retrieve all hands (for external use if needed)
    const std::unordered_map<int, std::vector<std::string>>& getPlayerHands() const {
        return playerHands;
    }

    // Print all hands (for debugging or game updates)
    void printAllHands(int usersPlayerNumber, int dealerPlayerNumber) const {
        std::cout << "\nCurrent hands of all players:\n";
        for (const auto& [playerId, hand] : playerHands) {
            if (playerId == usersPlayerNumber) {
                std::cout << "Your (Player " << playerId << ") cards: ";
            } else if (playerId == dealerPlayerNumber) {
                std::cout << "Dealer (Player " << playerId << ") cards: ";
            } else {
                std::cout << "Player " << playerId << " cards: ";
            }

            for (const auto& card : hand) {
                std::cout << card << ", ";
            }
            std::cout << std::endl;
        }
    }

    // Clear all player hands
    void clearPlayerHands() {
        playerHands.clear();
    }

    // Generate a random number within a range
    int restrictedRandom(int lower, int upper) {
        if (lower > upper) {
            throw std::invalid_argument("Lower bound must not exceed upper bound.");
        }
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(lower, upper);
        return dist(gen);
    }
};

#endif
