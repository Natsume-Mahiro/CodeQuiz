#include <memory>
#include "Game.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
    // 画面サイズ等の初期設定
    const int ScreenWidth = 500;
    const int ScreenHeight = 500;
    SetMainWindowText("CodeQuiz"); // ウィンドウの名前
    SetMainWindowClassName("CodeQuiz"); // ウィンドウクラスの名前
    ChangeWindowMode(TRUE); // ウィンドウモードで起動
    SetGraphMode(ScreenWidth, ScreenHeight, 32); // 画面の解像度指定
    SetWindowSizeChangeEnableFlag(FALSE); // 画面サイズ変更不可
    SetAlwaysRunFlag(TRUE); // 非アクティブでも実行する

    // DxLibのスタート
    if (DxLib_Init() == -1) return -1;

    // ゲームの生成と初期化
    std::unique_ptr<Game> game = std::make_unique<Game>();
    game->initialize();

    // 裏画面に描画する(ダブルバッファリング)
    SetDrawScreen(DX_SCREEN_BACK);

    // ループ
    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0)
    {
        game->update();

        // ESCキーでゲーム終了
        if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) break;
    }

    DxLib_End();

    return 0;
}
