#pragma once
#include "ImageButton.h"

class TitleScene
{
public:
    TitleScene();
    ~TitleScene();

    void initialize();
    void update();
    void draw();

private:
    ImageButton titleButton;
};
