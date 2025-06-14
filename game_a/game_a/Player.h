#pragma once
#include <string>

class Player {
private:
    std::string name;
    int score;
    int choice;

public:
    Player(std::string name);
    void makeChoice();

    std::string getName() const;
    int getScore() const;
    int getChoice() const;

    void addScore();
};
