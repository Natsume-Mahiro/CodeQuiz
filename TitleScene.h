#pragma once

#include "BaseScene.h"
#include "SceneManager.h"

class TitleScene : public BaseScene
{
public:
    TitleScene();
    ~TitleScene();

    void initialize(SceneManager* manager) override;
    void update() override;
    void draw() override;

private:
    SceneManager* sceneManager;
    ImageButton titleButton;
};
