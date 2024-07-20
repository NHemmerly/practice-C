#include <iostream>
#include "io.h"

int main()
{
    int num1 {};
    int num2 {};

    std::cout << "Enter first number: ";
    num1 = readNumber();
    std::cout << "Enter second number: ";
    num2 = readNumber();

    writeAnswer(num1 + num2);

}
