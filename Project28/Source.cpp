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

        std::cout << "Укажите свой выбор (1 - Камень, 2 - Бумага, 3 - Ножницы, 4 - ящерица , 5 - спок): ";
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
            std::cout << "Игрок выигрывает этот раунд!" << std::endl;
            playerScore++;
        }
        else if (playerChoice == computerChoice) {
            std::cout << "Это ничья!" << std::endl;
        }
        else {
            std::cout << "Компьютер выигрывает этот раунд!" << std::endl;
            computerScore++;
        }

        std::cout << "Счет игрока: " << playerScore << ", Счет бота: " << computerScore << std::endl;
    }

    if (playerScore == 3) {
        std::cout << "Игрог выйграл эту партию!" << std::endl;
    }
    else {
        std::cout << "Компьютер выйграл эту партию!" << std::endl;
    }

    
    char playAgain;
    std::cout << "Хотите повторить эсли да то нажмите д? (д/н): ";
    std::cin >> playAgain;

    if (playAgain == 'д') {
        main();
    }

    return 0;
}