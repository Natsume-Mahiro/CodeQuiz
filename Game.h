#pragma once

#include "ImageButton.h"

class Game
{
public:
    Game();
    ~Game();

    void initialize();
    void update();

private:
    enum class Scene
    {
        TITLE,
        LANGUAGE_SELECT
    };
    Scene currentScene;

    ImageButton button1;
};
