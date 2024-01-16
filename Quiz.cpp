// Quiz.cpp
#include "Quiz.h"

Quiz::Quiz(const std::string& language, const std::string& question, const std::string& choice1,
    const std::string& choice2, const std::string& choice3, const std::string& choice4)
    : language(language)
    , question(question)
    , choice1()
    , choice2()
    , choice3()
    , choice4()
{
    this->choice1.load(choice1.c_str(), 0, 0);
    this->choice2.load(choice2.c_str(), 0, 0);
    this->choice3.load(choice3.c_str(), 0, 0);
    this->choice4.load(choice4.c_str(), 0, 0);
}

Quiz::~Quiz()
{
}
