#pragma once
#include "Player.h"
#include "GameRule.h"

class Game {
private:
    Player player1;
    Player player2;
    GameRule rule;
    int roundCount;

public:
    Game(const std::string& name1, const std::string& name2);

    void playRound();
    void displayScore() const;
    bool isGameOver() const;
};
