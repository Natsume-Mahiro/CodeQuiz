#pragma once

#include "BaseScene.h"

class StageSelectScene : public BaseScene
{
public:
    StageSelectScene();
    ~StageSelectScene();

    void initialize() override;
    void update() override;
    void draw() override;
};
