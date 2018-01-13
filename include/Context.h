#ifndef CONTEXT_H
#define CONTEXT_H

class Player;

class Context
{
    public:
        Context();
        virtual ~Context();

        Player* player;
    protected:

    private:
};

#endif // CONTEXT_H
