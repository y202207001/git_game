#include "Game.h"

// Game 클래스 생성자 정의
Game::Game(const std::string& name1, const std::string& name2)
    : player1(name1), player2(name2), roundCount(0)
{
    // 필요한 초기화가 있다면 여기에 작성
}


bool Game::isGameOver() const {
    // 일단 테스트용으로 항상 false 반환하게 (루프 계속 돌게)
    return false;
}