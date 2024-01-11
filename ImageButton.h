#pragma once

#include "DxLib.h"

class ImageButton
{
public:
    ImageButton();
    ~ImageButton();

    void load(const char* imagePath, int x, int y);
    void draw();
    bool isClicked() const;
    void setDisabled(bool disabled);

private:
    int imageHandle;
    int posX;
    int posY;
    int width;
    int height;
    bool disabled;
};
