#include <iostream>
#include "io.h"

int readNumber()
{
    int num {};

    std::cin >> num;

    return num;
}

void writeAnswer(int answer)
{
    std::cout << answer << std::endl;
}