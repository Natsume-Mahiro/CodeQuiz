#include "Game.h"

Game::Game() {}

Game::~Game() {}

void Game::initialize()
{
    SetMouseDispFlag(TRUE);

    // �ŏ��̃V�[����ݒ�
    sceneManager.switchScene(Scene::TITLE);
}

void Game::update()
{
    sceneManager.update();
    sceneManager.draw();
}
