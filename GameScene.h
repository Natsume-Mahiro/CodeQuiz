#pragma once

#include "BaseScene.h"
#include "SceneManager.h"
#include "Quiz.h"
#include "FlashImage.h"

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
    FlashImage maru;
    FlashImage batsu;
};
