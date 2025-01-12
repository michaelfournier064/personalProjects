#include "helperFunctions/assistingFunctions.h"
#include "majorComponents/gameStart.h"

#include <iostream>

int main() {
    std::cout << "-----Welcome to the table!-----" << std::endl << std::endl;

    Auxiliary auxiliary; // Shared Auxiliary instance
    GameStart newGame(auxiliary); // Pass Auxiliary reference to GameStart

    newGame.gameInitialization();
    std::cout << std::endl;
    newGame.playerAssignment();
    std::cout << std::endl;
    newGame.initialDealing();
    std::cout << std::endl;

    // Use Auxiliary to print all hands
    auxiliary.printAllHands(newGame.usersPlayerNumber, newGame.dealerPlayerNumber);
    std::cout << std::endl;

    return 0;
}
