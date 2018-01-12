#include <conio.h>
#include "Game.h"

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}
void Game::Run()
{
    while(!exit)
    {
        char c = getch();
        if(c == 0x61)
        {
            exit = true;
        }
    }
}
