#include "TitleScene.h"

TitleScene::TitleScene()
{
    titleButton.load("Title_BackGround.jpg", 100, 100); // �^�C�g���{�^���̉摜�����[�h
}

TitleScene::~TitleScene() {}

void TitleScene::initialize()
{
}

void TitleScene::update()
{
    if (titleButton.isClicked())
    {
        // �^�C�g���{�^�����N���b�N���ꂽ��A���炩�̏������s���i�����ł͈ڍs�����ɏI�������Ƃ��Ă��܂��j
        DxLib_End();
    }
}

void TitleScene::draw()
{
    titleButton.draw(); // �^�C�g���{�^���̕`��
}
