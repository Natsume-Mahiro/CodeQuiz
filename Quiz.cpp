#include "Quiz.h"

Quiz::Quiz()
    : language()
    , quiz()
    , correct(0)
    , state(0)
    , choices{ &choice1, &choice2, &choice3, &choice4 }
{}

Quiz::~Quiz()
{
}

void Quiz::load(const std::string& language, const std::string& quiz, const std::string& choice1,
    const std::string& choice2, const std::string& choice3, const std::string& choice4,
    const int correct)
{
    this->language = language;
    this->quiz = quiz;
    this->correct = correct;

    if (this->correct > 4) this->correct = 4;

    this->choice1.load(choice1.c_str(), 165, 610);
    this->choice2.load(choice2.c_str(), 1005, 610);
    this->choice3.load(choice3.c_str(), 165, 840);
    this->choice4.load(choice4.c_str(), 1005, 840);
}

void Quiz::update()
{
    for (int i = 0; i < 4; i++)
    {
        if (i == correct - 1) // ê≥âÇÃìÆçÏ
        {
            if (choices[i]->isClicked())
            {
                state = 1;
            }
        }
        else
        {
            if (choices[i]->isClicked()) // ïsê≥âÇÃìÆçÏ
            {
                state = 2;
            }
        }
    }
}

void Quiz::draw()
{
    LoadGraphScreen(0, 0, quiz.c_str(), FALSE);
    choice1.draw();
    choice2.draw();
    choice3.draw();
    choice4.draw();
}
