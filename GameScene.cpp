#include "GameScene.h"

GameScene::GameScene()
    : sceneManager(nullptr)
{
}

GameScene::~GameScene()
{
}

void GameScene::initialize(SceneManager* manager)
{
    sceneManager = manager;
}

void GameScene::update()
{
}

void GameScene::draw()
{
}
