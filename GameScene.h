#pragma once

#include "BaseScene.h"

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
};
