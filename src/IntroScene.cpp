#include "IntroScene.h"
#include "Player.h"
#include "Context.h"
#include "stdio.h"


IntroScene::IntroScene(Context* context) : Scene(context)
{
    //ctor
}

IntroScene::~IntroScene()
{
    //dtor
}
void IntroScene::UpdateScene()
{
    char name[16];
    printf("Please Enter Your Name\n");
    scanf("%s", name);
    printf("%s",name);
    p_context->player->SetName(name);
}
