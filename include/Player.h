#ifndef PLAYER
#define PLAYER

#include <stdio.h>
#include <string.h>
#include <string>
#include <list>
using namespace std;

class Item;

class Player
{
public:
    Player();
    ~Player();

    void SetName(char* name)
    {
        strcpy(name,m_name);
    }

private:
    char m_name[16];
    list<Item*> items;
};

#endif // PLAYER

