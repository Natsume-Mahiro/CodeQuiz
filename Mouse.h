#pragma once

#include "DxLib.h"

class Mouse
{
public:
    static Mouse& getInstance();
    bool isPressed();

private:
    Mouse();
    ~Mouse();

    int prevMouseInput;
    static Mouse instance;
};
