#include "Game.h"

// Game Ŭ���� ������ ����
Game::Game(const std::string& name1, const std::string& name2)
    : player1(name1), player2(name2), roundCount(0)
{
    // �ʿ��� �ʱ�ȭ�� �ִٸ� ���⿡ �ۼ�
}


bool Game::isGameOver() const {
    // �ϴ� �׽�Ʈ������ �׻� false ��ȯ�ϰ� (���� ��� ����)
    return false;
}