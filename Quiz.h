#pragma once

#include <string>
#include "ImageButton.h"

class Quiz
{
public:
    Quiz();
    ~Quiz();

    void load(const std::string& language, const std::string& quiz, const std::string& choice1,
        const std::string& choice2, const std::string& choice3, const std::string& choice4,
        const int correct);

    void update();
    void draw();
    void setDisabled(bool disabled);

    int getState() const { return state; }

private:
    std::string language;
    std::string quiz;
    ImageButton choice1;
    ImageButton choice2;
    ImageButton choice3;
    ImageButton choice4;
    int correct;
    int state;

    ImageButton* choices[4];
};
