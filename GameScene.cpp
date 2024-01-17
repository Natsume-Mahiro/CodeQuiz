#include "GameScene.h"

GameScene::GameScene()
    : sceneManager(nullptr)
{}

GameScene::~GameScene()
{}

void GameScene::initialize(SceneManager* manager)
{
    sceneManager = manager;
    quiz.load("C++", "Images/CPPquiz1.jpg", "Images/CPPquiz1_1.jpg",
        "Images/CPPquiz1_2.jpg", "Images/CPPquiz1_3.jpg", "Images/CPPquiz1_4.jpg", 2);
    maru.load("Images/maru.png", 710, 290);
    batsu.load("Images/batsu.png", 710, 290);
}

void GameScene::update()
{
    quiz.update();

    if (maru.getState())
    {
        sceneManager->switchScene(Scene::STAGE_SELECT);
    }
    else if (batsu.getState())
    {
        sceneManager->switchScene(Scene::STAGE_SELECT);
    }
}

void GameScene::draw()
{
    quiz.draw();

    if (quiz.getState() == 1)
    {
        quiz.setDisabled(true);
        maru.draw();
    }
    else if (quiz.getState() == 2)
    {
        quiz.setDisabled(true);
        batsu.draw();
    }
}
