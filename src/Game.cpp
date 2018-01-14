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
    char name[16];
    printf("Please Enter Your Name\n");
    scanf("%s", name);
    printf("%s",name);

}

void Game::Run()
{
    while(!exit)
    {
        char c = getch();
        if(c == 0x1B)
        {
            exit = true;
        }
    }
}
