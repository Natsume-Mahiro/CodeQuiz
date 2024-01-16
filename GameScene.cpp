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
        "Images/CPPquiz1_2.jpg", "Images/CPPquiz1_3.jpg", "Images/CPPquiz1_4.jpg", 2);
}

void GameScene::update()
{
    quiz.update();

    if (quiz.getState() == 1)
    {
        sceneManager->switchScene(Scene::STAGE_SELECT);
    }
}

void GameScene::draw()
{
    quiz.draw();
}
