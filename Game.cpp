#include "Game.h"

Game::Game()
    : currentScene(nullptr)
{}

Game::~Game() {}

void Game::initialize()
{
    // マウスカーソルを表示
    SetMouseDispFlag(TRUE);

    // 各シーンにSceneManagerを設定
    titleScene.setSceneManager(sceneManager);

    // 最初のシーンを設定
    currentScene = &titleScene;
    currentScene->initialize();
}

void Game::update()
{
    switch (sceneManager.getCurrentScene())
    {
    case SceneManager::Scene::TITLE_LOAD:
        currentScene->initialize();
        sceneManager.switchScene(SceneManager::Scene::TITLE);
        break;

    case SceneManager::Scene::TITLE:
        currentScene->update();
        break;

    case SceneManager::Scene::STAGE_SELECT:
        break;
    }
}