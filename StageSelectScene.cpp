#include "StageSelectScene.h"

StageSelectScene::StageSelectScene()
	: sceneManager(nullptr)
{}

StageSelectScene::~StageSelectScene() {}

void StageSelectScene::initialize(SceneManager* manager)
{
	sceneManager = manager;
	gameStart.load("Images/GameStart.png", 128, 250);
}

void StageSelectScene::update()
{
	if (gameStart.isClicked())
	{
		sceneManager->switchScene(Scene::GAME);
	}
}

void StageSelectScene::draw()
{
	LoadGraphScreen(0, 0, "Images/StageSelect_BackGround.jpg", FALSE);
	gameStart.draw();
}
