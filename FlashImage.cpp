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
    // ‰æ‘œ‚Ì“Ç‚İ‚İ
    imageHandle = LoadGraph(imagePath.c_str());

    // ‰æ‘œ‚Ì•\¦
    DrawGraph(0, 0, imageHandle, TRUE);

    // ˆê•b‘Ò‚Â
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // ‰æ–Ê‚ğƒNƒŠƒA
    ClearDrawScreen();
}
