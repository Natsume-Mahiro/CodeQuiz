#include "Game.h"

Game::Game()
    : currentScene(nullptr)
{}

Game::~Game() {}

void Game::initialize()
{
    // �}�E�X�J�[�\����\��
    SetMouseDispFlag(TRUE);

    // �e�V�[����SceneManager��ݒ�
    titleScene.setSceneManager(sceneManager);

    // �ŏ��̃V�[����ݒ�
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