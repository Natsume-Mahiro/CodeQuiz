#include "Game.h"

Game::Game()
{}

Game::~Game() {}

void Game::initialize()
{
    SetMouseDispFlag(TRUE); // マウスカーソルを表示
	button1.load("Images/Title_BackGround.jpg", 0, 0);
}

void Game::update()
{
    switch (sceneManager.getCurrentScene())
    {
    case SceneManager::Scene::TITLE:
        if (button1.isClicked())
        {
            sceneManager.switchScene(SceneManager::Scene::STAGE_SELECT);
        }
        button1.draw();
        break;

    case SceneManager::Scene::STAGE_SELECT:
        LoadGraphScreen(0, 0, "Images/StageSelect_BackGround.jpg", FALSE);
        break;
    }
}
