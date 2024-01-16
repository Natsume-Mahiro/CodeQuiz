#include "SceneManager.h"
#include "TitleScene.h"
#include "StageSelectScene.h"
#include "GameScene.h"

SceneManager::SceneManager()
    : currentScene(nullptr)
    , currentSceneType(Scene::TITLE)
{}

SceneManager::~SceneManager() {}

void SceneManager::switchScene(Scene newScene)
{
    currentSceneType = newScene;

    // �ȑO�̃V�[���̃����������
    delete currentScene;
    currentScene = nullptr;

    // �؂�ւ���V�[���̃C���X�^���X�𐶐�����
    switch (currentSceneType)
    {
    case Scene::TITLE:
        currentScene = new TitleScene();
        break;
    case Scene::STAGE_SELECT:
        currentScene = new StageSelectScene();
        break;
    case Scene::GAME:
        currentScene = new GameScene();
        break;
    }

    if (currentScene)
    {
        currentScene->initialize(this);
    }
}

void SceneManager::update()
{
    if (currentScene)
    {
        currentScene->update();
    }
}

void SceneManager::draw()
{
    if (currentScene)
    {
        currentScene->draw();
    }
}
