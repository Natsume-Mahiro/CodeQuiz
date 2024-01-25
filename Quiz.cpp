#include "Quiz.h"

Quiz::Quiz(const std::string& language, const std::string& quiz, const std::string& choice_1,
    const std::string& choice_2, const std::string& choice_3, const std::string& choice_4,
    const int correct)
    : language(language)
    , quiz(quiz)
    , correct(correct)
    , state(0)
    , choice1(choice_1.c_str(), 165, 610)
    , choice2(choice_2.c_str(), 1005, 610)
    , choice3(choice_3.c_str(), 165, 840)
    , choice4(choice_4.c_str(), 1005, 840)
    , choices{ &choice1, &choice2, &choice3, &choice4 }
{
    if (correct > 4) this->correct = 4;
}

Quiz::~Quiz()
{
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

void Quiz::setDisabled(bool a)
{
    choice1.setDisabled(a);
    choice2.setDisabled(a);
    choice3.setDisabled(a);
    choice4.setDisabled(a);
}
