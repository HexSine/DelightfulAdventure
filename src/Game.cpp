#include <stdio.h>
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

void Game::Initialize()
{

}

void Game::Run()
{
    while(!m_exit)
    {
        char c = getch();
        if(c == 0x1B)
        {
            m_exit = true;
        }
    }
}
