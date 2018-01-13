#ifndef GAME_H
#define GAME_H

#include "Player.h"

struct Context
{

};
class Game
{
    public:
        Game();
        virtual ~Game();

        void Run();
    protected:

    private:
        Player player;
        bool exit;
};

#endif // GAME_H
