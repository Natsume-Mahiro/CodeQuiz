#include "Game.h"

Game::Game() {}

Game::~Game() {}

void Game::initialize()
{
    SetMouseDispFlag(TRUE); // マウスカーソルを表示
}

void Game::update()
{
    switch (sceneManager.getCurrentScene())
    {
    case SceneManager::Scene::TITLE_LOAD:
        title.initialize(sceneManager);
        sceneManager.switchScene(SceneManager::Scene::TITLE);
        break;

    case SceneManager::Scene::TITLE:
        title.update();
        break;

    case SceneManager::Scene::STAGE_SELECT:
        LoadGraphScreen(0, 0, "Images/StageSelect_BackGround.jpg", FALSE);
        break;
    }
}