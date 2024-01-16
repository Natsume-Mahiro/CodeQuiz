#include "Mouse.h"

Mouse Mouse::instance;

Mouse::Mouse()
    : prevMouseInput(0)
{}

Mouse::~Mouse()
{}

Mouse& Mouse::getInstance()
{
    return instance;
}

bool Mouse::isPressed()
{
    int currentMouseInput = GetMouseInput();
    bool pressed = (prevMouseInput == 0) && (currentMouseInput & MOUSE_INPUT_LEFT);
    prevMouseInput = currentMouseInput;

    return pressed;
}
