#pragma once

#include "SceneManager.h"

class Game
{
public:
    Game();
    ~Game();

    void initialize();
    void update();

private:
    SceneManager sceneManager;
};
