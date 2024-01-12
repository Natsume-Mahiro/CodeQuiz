#include "SceneManager.h"

SceneManager::SceneManager()
    : currentScene(Scene::TITLE)
{}

SceneManager::~SceneManager() {}

void SceneManager::switchScene(Scene scene)
{
    currentScene = scene;
}
