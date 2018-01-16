#ifndef INTROSCENE_H
#define INTROSCENE_H

#include "Scene.h"

class IntroScene : Scene
{
    public:
        IntroScene(Context* context);
        virtual ~IntroScene();
        virtual void UpdateScene();
    protected:

    private:
};

#endif // INTROSCENE_H
