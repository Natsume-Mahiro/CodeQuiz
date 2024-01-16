#include <memory>
#include "Game.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
    // ��ʃT�C�Y���̏����ݒ�
    const int ScreenWidth = 500;
    const int ScreenHeight = 500;
    SetMainWindowText("CodeQuiz"); // �E�B���h�E�̖��O
    SetMainWindowClassName("CodeQuiz"); // �E�B���h�E�N���X�̖��O
    ChangeWindowMode(TRUE); // �E�B���h�E���[�h�ŋN��
    SetGraphMode(ScreenWidth, ScreenHeight, 32); // ��ʂ̉𑜓x�w��
    SetWindowSizeChangeEnableFlag(FALSE); // ��ʃT�C�Y�ύX�s��
    SetAlwaysRunFlag(TRUE); // ��A�N�e�B�u�ł����s����

    // DxLib�̃X�^�[�g
    if (DxLib_Init() == -1) return -1;

    // �Q�[���̐����Ə�����
    std::unique_ptr<Game> game = std::make_unique<Game>();
    game->initialize();

    // ����ʂɕ`�悷��(�_�u���o�b�t�@�����O)
    SetDrawScreen(DX_SCREEN_BACK);

    // ���[�v
    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0)
    {
        game->update();

        // ESC�L�[�ŃQ�[���I��
        if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) break;
    }

    DxLib_End();

    return 0;
}
