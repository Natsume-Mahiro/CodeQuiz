#include "TitleScene.h"

TitleScene::TitleScene()
    : sceneManager(nullptr)
    , titleButton("Images/Title_BackGround.jpg", 0, 0)
{}

TitleScene::~TitleScene() {}

void TitleScene::initialize(SceneManager* manager)
{
    sceneManager = manager;
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
