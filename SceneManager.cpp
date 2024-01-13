#include "SceneManager.h"

SceneManager::SceneManager()
    : currentScene(Scene::TITLE_LOAD)
{}

SceneManager::~SceneManager() {}

void SceneManager::switchScene(Scene scene)
{
    currentScene = scene;
}
