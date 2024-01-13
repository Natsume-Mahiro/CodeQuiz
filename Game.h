#pragma once

#include "BaseScene.h"
#include "TitleScene.h"

class Game
{
public:
    Game();
    ~Game();

    void initialize();
    void update();

private:
    BaseScene* currentScene;
    SceneManager sceneManager;
    TitleScene titleScene;
};
