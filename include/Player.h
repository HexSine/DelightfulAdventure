#ifndef PLAYER
#define PLAYER

#include <iostream>
#include <string>
#include <list>
using namespace std;

class item;

class Player
{
public:
    Player();
    ~Player();
    string name;
    list<Item*> items;
};

#endif // PLAYER

