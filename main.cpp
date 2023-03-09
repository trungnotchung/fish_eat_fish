#include "ltexture.h"
#include "lbutton.h"
#include "game.h"
#include <iostream>

int main()
{
    srand(time(NULL));
    
    LGame newGame;
    newGame.loadGame();
    newGame.playGame();

    std::cout << "No error found!";
    return 0;
}