#include <iostream>
#include <random>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int playerScore = 0;
    int computerScore = 0;
    while (playerScore < 3 && computerScore < 3) {

        std::cout << "������� ���� ����� (1 - ������, 2 - ������, 3 - �������, 4 - ������� , 5 - ����): ";
        int playerChoice;
        std::cin >> playerChoice;


        int computerChoice = rand() % 3 + 1;


        if ((playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2) ||
            (playerChoice == 4 && computerChoice == 3) ||
            (playerChoice == 5 && computerChoice == 2) ||
            (playerChoice == 1 && computerChoice == 5) ||
            (playerChoice == 2 && computerChoice == 4) ||
            (playerChoice == 3 && computerChoice == 5))
        {
            std::cout << "����� ���������� ���� �����!" << std::endl;
            playerScore++;
        }
        else if (playerChoice == computerChoice) {
            std::cout << "��� �����!" << std::endl;
        }
        else {
            std::cout << "��������� ���������� ���� �����!" << std::endl;
            computerScore++;
        }

        std::cout << "���� ������: " << playerScore << ", ���� ����: " << computerScore << std::endl;
    }

    if (playerScore == 3) {
        std::cout << "����� ������� ��� ������!" << std::endl;
    }
    else {
        std::cout << "��������� ������� ��� ������!" << std::endl;
    }

    
    char playAgain;
    std::cout << "������ ��������� ���� �� �� ������� �? (�/�): ";
    std::cin >> playAgain;

    if (playAgain == '�') {
        main();
    }

    return 0;
}