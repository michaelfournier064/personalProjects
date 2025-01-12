#ifndef GAME_START_H
#define GAME_START_H

#include "../majorComponents/cardDrawing.h"
#include "../helperFunctions/errorHandler.h"
#include "../helperFunctions/assistingFunctions.h"

#include <iostream>
#include <vector>
#include <limits>
#include <string>

class GameStart {
private:
    Auxiliary& auxiliary; // Reference to Auxiliary instance
    inputErrors playerError;
    Card cardGenerator;

    int playerAmount{};

public:
    int dealerPlayerNumber{};
    int usersPlayerNumber{};

    // Constructor to initialize GameStart with an Auxiliary reference
    GameStart(Auxiliary& aux) : auxiliary(aux) {}

    void gameInitialization() {
        do {
            std::cout << "How many players will be participating in this game? ";
            if (!(std::cin >> playerAmount)) {
                std::cin.clear(); // Clear error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a number." << std::endl;
                continue;
            }
        } while (!playerError.playerAmountError(playerAmount));

        dealerPlayerNumber = playerAmount; // Set the dealer to the last player
    }

    void playerAssignment() {
        usersPlayerNumber = auxiliary.restrictedRandom(1, playerAmount - 1);
        std::cout << "You are player " << usersPlayerNumber << std::endl;
        std::cout << "The dealer is player " << dealerPlayerNumber << std::endl;
    }

    void initialDealing() {
        std::cout << "\nDealing initial cards..." << std::endl;

        for (int i = 1; i <= playerAmount; ++i) {
            if (i == usersPlayerNumber) {
                std::cout << "Your (Player " << i << ") cards are:" << std::endl;
            } else if (i == dealerPlayerNumber) {
                std::cout << "Dealer (Player " << i << ")'s cards are:" << std::endl;
            } else {
                std::cout << "Player " << i << "'s cards are:" << std::endl;
            }

            // Generate two cards for each player
            for (int j = 0; j < 2; ++j) {
                cardGenerator.generateCard();
                std::string card = cardGenerator.getCard();
                auxiliary.addCardToPlayer(i, card); // Store the card dynamically
                std::cout << "- " << card << std::endl;
            }
        }
    }
};

#endif
