#pragma once

#include "ImageButton.h"

class BaseScene
{
public:
    BaseScene() {}
    virtual ~BaseScene() {}

    virtual void initialize(class SceneManager* manager) = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
};
