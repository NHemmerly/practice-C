#include <iostream>
#include <cstdint>

double getUserInput()
{
    double x{};
    std::cin >> x;
    return x;
}

char getCharInput()
{
    char x{};
    std::cin >> x;
    return x;
}

double calculateAnswer(double op1, double op2, char operate)
{
    if (operate == '+')
    {
        return op1 + op2;
    } else if (operate == '-')
    {
        return op1 - op2;
    } else if (operate == '*')
    {
        return op1 * op2;
    } else if (operate == '/' && op2 != 0)
    {
        return op1 / op2;
    } else 
    {
        std::cout << "ERROR PLEASE RETRY" << std::endl;
        return 1;
    }
}

int main()
{
    std::cout << "Enter first number: ";
    double operand1{getUserInput()};
    std::cout << "Enter second number: ";    
    double operand2{getUserInput()};

    std::cout << "Enter an operator (+, -, /, *): ";
    char operate{getCharInput()};

    std::cout << operand1 << " " << operate << " " << operand2 << " is " 
                << calculateAnswer(operand1, operand2, operate) << std::endl;

}