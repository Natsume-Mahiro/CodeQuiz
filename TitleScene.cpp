#include "TitleScene.h"

TitleScene::TitleScene()
    : sceneManager(nullptr)
{}

TitleScene::~TitleScene() {}

void TitleScene::initialize(SceneManager& manager)
{
    sceneManager = &manager;
    titleButton.load("Images/Title_BackGround.jpg", 0, 0);
}

void TitleScene::update()
{
    draw();

    if (titleButton.isClicked())
    {
        sceneManager->switchScene(SceneManager::Scene::STAGE_SELECT);
    }
}

void TitleScene::draw()
{
    titleButton.draw();
}