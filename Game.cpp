#include "Game.h"

Game::Game() {}

Game::~Game() {}

void Game::initialize()
{
    SetMouseDispFlag(TRUE);

    // Å‰‚ÌƒV[ƒ“‚ğİ’è
    sceneManager.switchScene(Scene::TITLE);
}

void Game::update()
{
    sceneManager.update();
    sceneManager.draw();
}
