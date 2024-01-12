#pragma once

#include "SceneManager.h"
#include "ImageButton.h"

class Game
{
public:
    Game();
    ~Game();

    void initialize();
    void update();

private:
    SceneManager sceneManager;
    ImageButton button1;
};
