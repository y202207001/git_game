#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::string playername;
    std::cout << "이름입력: ";
    std::cin >> playername;

    int playscore = 0;
    int aiscore = 0;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));


    for (int round = 1; round <= 10; round++) {
        std::cout << round << "round -  " << std::endl;
        int playerchoice;
        int aichoice = std::rand() % 3 + 1;
        std::cout << "1.가위  2.바위   3.보" << std::endl;
        std::cin >> playerchoice;
        if (playerchoice == 1) {
            std::cout << "player- 가위" << std::endl;
        }
        else if (playerchoice == 2) {
            std::cout << "player- 바위" << std::endl;

        }
        else if (playerchoice == 3) {
            std::cout << "player- 보" << std::endl;

        }
        else {
            std::cout << "잘못된 값을 입력하셨습니다" << std::endl;
        }


        if (aichoice == 1) {
            std::cout << "AI- 가위" << std::endl;
        }
        else if (aichoice == 2) {
            std::cout << "AI- 바위" << std::endl;
        }
        else  {
            std::cout << "AI- 보" << std::endl;
        }
        

        if (playerchoice == aichoice) {
            std::cout << "무승부입니다" << std::endl;
        }
        else if ((playerchoice == 1 && aichoice == 3)||(playerchoice == 2 && aichoice == 1) || (playerchoice == 3 && aichoice == 2)){
            std::cout << playername << "님 승리입니다 1점 획득하셨습니다" << std::endl;
            playscore++;
        }
        else {
            std::cout << "ai 승리입니다." << std::endl;
            aiscore++;
        }
       
        std::cout << "현재 " << playername << "님 점수: " << playscore << std::endl;
        std::cout << "현재 AI의 점수: " << aiscore<< std::endl;


        std::cout << std::endl;

    }

    if (aiscore > playscore) {
        std::cout << "AI 승리입니다";
    }
    else if (aiscore < playscore) {
        std::cout << "player 승리입니다";
    }
    else {
        std::cout << "무승부입니다";
    }
    return 0;
}
