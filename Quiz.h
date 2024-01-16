#pragma once

#include <string>
#include "ImageButton.h"

class Quiz
{
public:
    Quiz(const std::string& language, const std::string& quiz, const std::string& choice1,
        const std::string& choice2, const std::string& choice3, const std::string& choice4);
    ~Quiz();

    void draw();

private:
    std::string language;
    std::string quiz;
    ImageButton choice1;
    ImageButton choice2;
    ImageButton choice3;
    ImageButton choice4;
};
