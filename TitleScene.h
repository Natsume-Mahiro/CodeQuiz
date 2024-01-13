#pragma once

#include "SceneManager.h"
#include "ImageButton.h"

class TitleScene
{
public:
    TitleScene();
    ~TitleScene();

    void initialize(SceneManager& manager);
    void update();
    void draw();

private:
    SceneManager* sceneManager;
    ImageButton titleButton;
};
