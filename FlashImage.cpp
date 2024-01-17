#include "FlashImage.h"

FlashImage::FlashImage()
    : imageHandle(-1)
    , posX(0)
    , posY(0)
    , Count(0)
    , State(false)
{}

FlashImage::~FlashImage()
{
    if (imageHandle != -1)
    {
        DeleteGraph(imageHandle);
    }
}

void FlashImage::load(const char* imagePath, int x, int y)
{
    imageHandle = LoadGraph(imagePath);
    posX = x;
    posY = y;
}

void FlashImage::draw()
{
    Count++;
    if (Count < 60)
    {
        DrawGraph(posX, posY, imageHandle, TRUE);
    }
    else
    {
        State = true;
        Count = 0;
    }
}
