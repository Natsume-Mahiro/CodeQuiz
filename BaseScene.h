#pragma once

#include "ImageButton.h"

class SceneManager;

class BaseScene
{
public:
    BaseScene() {}
    virtual ~BaseScene() {}

    virtual void initialize(SceneManager* manager) = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
};
