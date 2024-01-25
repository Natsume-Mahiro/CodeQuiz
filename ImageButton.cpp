#include "ImageButton.h"
#include "Mouse.h"

ImageButton::ImageButton(const char* imagePath, int x, int y)
    : posX(x)
    , posY(y)
    , width(0)
    , height(0)
    , disabled(false)
    , imageHandle(-1)
{
    imageHandle = LoadGraph(imagePath);
    if (imageHandle == -1)
    {
        // エラーハンドリング
    }
    else
    {
        GetGraphSize(imageHandle, &width, &height);
    }
}

ImageButton::~ImageButton()
{
    releaseImage();
}

void ImageButton::draw() const
{
    if (imageHandle != -1)
    {
        DrawGraph(posX, posY, imageHandle, TRUE);
    }
}

bool ImageButton::isClicked() const
{
    if (disabled || imageHandle == -1)
    {
        return false;
    }

    int mouseX, mouseY;
    GetMousePoint(&mouseX, &mouseY);

    return (mouseX >= posX && mouseX <= posX + width &&
        mouseY >= posY && mouseY <= posY + height &&
        Mouse::getInstance().isPressed());
}

void ImageButton::setDisabled(bool a)
{
    disabled = a;
}

void ImageButton::releaseImage()
{
    if (imageHandle != -1)
    {
        DeleteGraph(imageHandle);
        imageHandle = -1;
    }
}
