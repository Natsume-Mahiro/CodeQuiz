#include "TitleScene.h"

TitleScene::TitleScene()
    : sceneManager(nullptr)
{}

TitleScene::~TitleScene() {}

void TitleScene::initialize(SceneManager* manager)
{
    sceneManager = manager;
    titleButton.load("Images/Title_BackGround.jpg", 0, 0);
}

void TitleScene::update()
{
    if (titleButton.isClicked())
    {
        sceneManager->switchScene(Scene::STAGE_SELECT);
    }
}

void TitleScene::draw()
{
    titleButton.draw();
}
