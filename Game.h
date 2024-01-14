#pragma once

#include "BaseScene.h"
#include "SceneManager.h"
#include "TitleScene.h"
#include "StageSelectScene.h"

class Game
{
public:
    Game();
    ~Game();

    void initialize();
    void update();

private:
    SceneManager sceneManager;
    TitleScene titleScene;
    StageSelectScene stageSelectScene;
};
