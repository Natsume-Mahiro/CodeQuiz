#include "StageSelectScene.h"

StageSelectScene::StageSelectScene() {}

StageSelectScene::~StageSelectScene() {}

void StageSelectScene::initialize(SceneManager* manager)
{
	sceneManager = manager;
}

void StageSelectScene::update()
{
}

void StageSelectScene::draw()
{
	LoadGraphScreen(0, 0, "Images/StageSelect_BackGround.jpg", FALSE);
}
