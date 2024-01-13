#pragma once

#include "BaseScene.h"

class TitleScene : public BaseScene
{
public:
    TitleScene();
    ~TitleScene();

    void initialize() override;
    void update() override;
    void draw() override;

private:
    ImageButton titleButton;
};
