#include "ImageButton.h"

ImageButton::ImageButton()
    : imageHandle(-1)
    , posX(0)
    , posY(0)
    , width(0)
    , height(0)
    , disabled(false)
{}

ImageButton::~ImageButton()
{
    if (imageHandle != -1)
    {
        DeleteGraph(imageHandle);
    }
}

void ImageButton::load(const char* imagePath, int x, int y)
{
    imageHandle = LoadGraph(imagePath);
    posX = x;
    posY = y;
    GetGraphSize(imageHandle, &width, &height);
}

void ImageButton::draw()
{
    DrawGraph(posX, posY, imageHandle, TRUE);
}

bool ImageButton::isClicked() const
{
    if (!disabled)
    {
        return false;  // disabledがtrueの場合はボタンが反応しない
    }

    int mouseX, mouseY;
    GetMousePoint(&mouseX, &mouseY);

    return (mouseX >= posX && mouseX <= posX + width &&
        mouseY >= posY && mouseY <= posY + height &&
        GetMouseInput() & MOUSE_INPUT_LEFT) != 0;
}

void ImageButton::setDisabled(bool a)
{
    disabled = a;
}
