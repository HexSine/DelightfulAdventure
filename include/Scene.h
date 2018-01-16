#ifndef SCENE_H
#define SCENE_H

class Context;

class Scene
{
    public:
        Scene(Context* context);
        virtual ~Scene();
        virtual void UpdateScene() {};
    protected:
        Context* p_context;
    private:

};

#endif // SCENE_H
