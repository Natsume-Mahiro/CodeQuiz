#include "Game.h"

Game::Game() {}

Game::~Game() {}

void Game::initialize()
{
    SetMouseDispFlag(TRUE); // マウスカーソルを表示
	button1.load("Images/CodeQuiz_Title.jpg", 0, 0);
}

void Game::update()
{
    if (button1.isClicked())
    {
        DxLib_End();
    }

    button1.draw();
}
