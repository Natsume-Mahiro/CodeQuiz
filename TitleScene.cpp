#include "TitleScene.h"

TitleScene::TitleScene()
{
    titleButton.load("Title_BackGround.jpg", 100, 100); // タイトルボタンの画像をロード
}

TitleScene::~TitleScene() {}

void TitleScene::initialize()
{
}

void TitleScene::update()
{
    if (titleButton.isClicked())
    {
        // タイトルボタンがクリックされたら、何らかの処理を行う（ここでは移行せずに終了する例としています）
        DxLib_End();
    }
}

void TitleScene::draw()
{
    titleButton.draw(); // タイトルボタンの描画
}
