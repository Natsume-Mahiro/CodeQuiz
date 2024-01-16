#include "GameScene.h"

GameScene::GameScene()
    : sceneManager(nullptr)
    , quiz("C++", "Images/CPPquiz1.jpg", "Images/CPPquiz1_1.jpg",
        "Images/CPPquiz1_2.jpg", "Images/CPPquiz1_3.jpg", "Images/CPPquiz1_4.jpg")
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
    quiz.draw();
}
