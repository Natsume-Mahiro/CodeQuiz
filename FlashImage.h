#pragma once

#include "DxLib.h"
#include <thread>
#include <chrono>
#include <string>

class FlashImage
{
public:
    FlashImage(const char* imagePath);
    ~FlashImage();

    void display();

private:
    int imageHandle;
    std::string imagePath;
};
