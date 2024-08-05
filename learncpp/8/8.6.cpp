#include <iostream>

int calculate(int num1, int num2, char operation)
{
    switch(operation)
    {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        case '%':
            return num1 % num2;
        default:
            std::cout << "Unrecognized operator, " << operation << " please try again." << std::endl;
            return 0;
    }
}

int main()
{
    int x{};
    int y{};
    char operation{};
    std::cout << "Enter first integer: ";
    std::cin >> x;
    std::cout << "Enter second integer: ";
    std::cin >> y;

    std::cout << "Enter an operator(+, -, *, /, %): ";
    std::cin >> operation;

    std::cout << x << " " << operation << " " << y << " is " << calculate(x, y, operation) << std::endl;
}