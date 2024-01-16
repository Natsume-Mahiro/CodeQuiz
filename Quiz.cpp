#include "Quiz.h"

Quiz::Quiz()
    : language()
    , quiz()
{}

Quiz::~Quiz()
{
}

void Quiz::load(const std::string& language, const std::string& quiz, const std::string& choice1,
    const std::string& choice2, const std::string& choice3, const std::string& choice4)
{
    this->language = language;
    this->quiz = quiz;

    this->choice1.load(choice1.c_str(), 165, 610);
    this->choice2.load(choice2.c_str(), 1005, 610);
    this->choice3.load(choice3.c_str(), 165, 840);
    this->choice4.load(choice4.c_str(), 1005, 840);
}

void Quiz::update()
{}

void Quiz::draw()
{
    LoadGraphScreen(0, 0, quiz.c_str(), FALSE);
    choice1.draw();
    choice2.draw();
    choice3.draw();
    choice4.draw();
}
