#pragma once

#include "DxLib.h"

class ImageButton
{
public:
    ImageButton(const char* imagePath, int x = 0, int y = 0);
    ~ImageButton();

    void draw() const;
    bool isClicked() const;
    void setDisabled(bool disabled);

private:
    int imageHandle;
    int posX;
    int posY;
    int width;
    int height;
    bool disabled;

    void releaseImage();
};
