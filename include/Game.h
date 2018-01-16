#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <conio.h>
#include <map>

#include "IntroScene.h"
#include "Player.h"

using namespace std;

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

        Context m_context;
        bool m_exit;
};

#endif // GAME_H
