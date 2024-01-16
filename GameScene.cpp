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
    quiz.load("C++", "Images/CPPquiz1.jpg", "Images/CPPquiz1_1.jpg",
        "Images/CPPquiz1_2.jpg", "Images/CPPquiz1_3.jpg", "Images/CPPquiz1_4.jpg");
}

void GameScene::update()
{
    quiz.update();
}

void GameScene::draw()
{
    quiz.draw();
}
