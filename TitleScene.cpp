#include "TitleScene.h"

TitleScene::TitleScene() {}

TitleScene::~TitleScene() {}

void TitleScene::initialize()
{
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
