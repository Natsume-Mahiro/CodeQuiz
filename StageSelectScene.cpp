#include "StageSelectScene.h"

StageSelectScene::StageSelectScene() {}

StageSelectScene::~StageSelectScene() {}

void StageSelectScene::initialize(SceneManager* manager)
{
	sceneManager = manager;
	gameStart.load("Images/GameStart.png", 128, 250);
}

void StageSelectScene::update()
{
}

void StageSelectScene::draw()
{
	LoadGraphScreen(0, 0, "Images/StageSelect_BackGround.jpg", FALSE);
	gameStart.draw();
}
