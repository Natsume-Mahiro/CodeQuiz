#include "Game.h"

Game::Game()
    : currentScene(Scene::TITLE)
{}

Game::~Game() {}

void Game::initialize()
{
    SetMouseDispFlag(TRUE); // マウスカーソルを表示
	button1.load("Images/CodeQuiz_Title.jpg", 0, 0);
}

void Game::update()
{
    switch (currentScene)
    {
    case Scene::TITLE:
        if (button1.isClicked())
        {
            currentScene = Scene::LANGUAGE_SELECT;
        }
        button1.draw();
        //LoadGraphScreen(0, 0, "Images/ImageA.jpg",TRUE);
        break;

    case Scene::LANGUAGE_SELECT:
        break;
    }
}
