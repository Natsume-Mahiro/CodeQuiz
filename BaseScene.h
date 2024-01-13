#pragma once

#include "SceneManager.h"
#include "ImageButton.h"

class BaseScene
{
public:
    BaseScene() : sceneManager(nullptr) {}
    virtual ~BaseScene() {}

    void setSceneManager(SceneManager& manager) { sceneManager = &manager; }

    virtual void initialize() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;

protected:
    SceneManager* sceneManager;
};
