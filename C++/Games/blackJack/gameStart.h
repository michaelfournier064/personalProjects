#ifndef gameStart_h
#define gameStart_h

#include <iostream>


class gameStart{
private:

public:
int playerAmount{};

void gameInitialzation() {
    std::cout << "How many players will be participating in this game? ";
    std::cin >> playerAmount;
    std::cout << std::endl;
}

};
#endif 
