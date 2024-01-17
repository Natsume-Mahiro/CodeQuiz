#include "FlashImage.h"

FlashImage::FlashImage(const char* imagePath)
    : imageHandle(-1), imagePath(imagePath)
{}

FlashImage::~FlashImage()
{
    if (imageHandle != -1)
    {
        DeleteGraph(imageHandle);
    }
}

void FlashImage::display()
{
    // �摜�̓ǂݍ���
    imageHandle = LoadGraph(imagePath.c_str());

    // �摜�̕\��
    DrawGraph(0, 0, imageHandle, TRUE);

    // ��b�҂�
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // ��ʂ��N���A
    ClearDrawScreen();
}
