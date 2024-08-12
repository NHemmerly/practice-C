#include <iostream>
#include "random.h"

bool playAgain()
{
    char yn{};
    std::cout << "Would you like to play again? (y/n) ";
    std::cin >> yn;
    if (yn == 'y')
    {
        return true;
    }
    std::cout << "Hope to see you again!" << std::endl;
    return false;
}

bool checkWin(int guess, int rand)
{
    if (guess == rand)
    {
        std::cout << "You win!" << std::endl;
        return true;
    } else if (guess > rand)
    {
        std::cout << "Too high!" << std::endl;
    } else if (guess < rand)
    {
        std::cout << "Too low!" << std::endl;
    }
    return false;
}

void guessLoop()
{
    int randSelect {Random::get(1, 100)};
    for (int i{0}; i < 7; ++i)
    {
        int guess{};
        std::cout << "Enter a number: ";
        std::cin >> guess;
        if(checkWin(guess, randSelect))
        {
            std::cout << "It only took you " << i + 1 << " tries!" << std::endl;
            return;
        }
    }
    std::cout << "You ran out of tries! Game over :(" << std::endl; 
}

void startGameLoop()
{
    std::cout << "I'm thinking of a number between 1 and 100."
            << "You have 7 guesses to guess it correctly!" << std::endl;

    while (true)
    {
        guessLoop();
        if (!(playAgain()))
        {
            break;
        }
    }
}

int main()
{
    startGameLoop();
}