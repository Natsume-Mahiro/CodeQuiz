#pragma once

#include "BaseScene.h"
#include "SceneManager.h"

class StageSelectScene : public BaseScene
{
public:
    StageSelectScene();
    ~StageSelectScene();

    void initialize(SceneManager* manager) override;
    void update() override;
    void draw() override;

private:
    SceneManager* sceneManager;
    ImageButton gameStart;
};
