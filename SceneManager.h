#pragma once

#include "BaseScene.h"

enum class Scene
{
    TITLE,
    STAGE_SELECT,
    GAME
};

class SceneManager
{
public:
    SceneManager();
    ~SceneManager();

    void switchScene(Scene newScene);

    void update();
    void draw();

private:
    BaseScene* currentScene;
    Scene currentSceneType;
};
