#include "Quiz.h"

Quiz::Quiz(const std::string& language, const std::string& quiz, const std::string& choice1,
    const std::string& choice2, const std::string& choice3, const std::string& choice4)
    : language(language)
    , quiz(quiz)
{
    this->choice1.load(choice1.c_str(), 0, 0);
    this->choice2.load(choice2.c_str(), 0, 0);
    this->choice3.load(choice3.c_str(), 0, 0);
    this->choice4.load(choice4.c_str(), 0, 0);
}

Quiz::~Quiz()
{
}

void Quiz::draw()
{
    LoadGraphScreen(0, 0, quiz.c_str(), FALSE);
    choice1.draw();
    choice2.draw();
    choice3.draw();
    choice4.draw();
}
