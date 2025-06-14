#pragma once
#include <string>

class Ui {
public:
    void printWelcome() const;
    std::string getPlayerName(int playerNumber) const;
    int getPlayerChoice(const std::string& playerName) const;
    void printResult(const std::string& name1, const std::string& name2, int choice1, int choice2, int winner) const;
    void printFinalScore(int score1, int score2) const;
};
