#pragma once

#include "DxLib.h"

#include "SceneManager.h"
#include "TitleScene.h"

class Game
{
public:
    Game();
    ~Game();

    void initialize();
    void update();

private:
    SceneManager sceneManager;
    TitleScene title;
};
