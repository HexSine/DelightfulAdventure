
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;


#include "json.hpp"

#include "Game.h"

// for convenience
using json = nlohmann::json;

int main()
{
    json scenes = {
        {"IntroScene",
            {"ID",0}
        }
    };
    Game game;
    game.Initialize();
    game.Run();
}
