#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <conio.h>

#include "Player.h"

struct Context
{
    Player player;
};
class Game
{
    public:
        Game();
        virtual ~Game();
        void Initialize();
        void Run();
    protected:

    private:
        bool exit;
};

#endif // GAME_H
