#pragma once

#include "BaseScene.h"
#include "SceneManager.h"
#include "Quiz.h"

class GameScene : public BaseScene
{
public:
    GameScene();
    ~GameScene();

    void initialize(SceneManager* manager) override;
    void update() override;
    void draw() override;

private:
    SceneManager* sceneManager;
    Quiz quiz;
};
