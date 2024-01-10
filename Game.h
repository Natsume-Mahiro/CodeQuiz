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
    ImageButton button1;
};
