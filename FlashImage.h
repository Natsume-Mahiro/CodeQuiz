#pragma once

#include "DxLib.h"
#include <string>

class FlashImage
{
public:
    FlashImage();
    ~FlashImage();

    void load(const char* imagePath, int x, int y);
    void draw();

    bool getState() const { return State; }

private:
    int imageHandle;
    int posX;
    int posY;
    int Count;

    bool State;
};
