#include <iostream>

constexpr bool isEven(int num)
{
    return !((num % 2) == 0);
}


int main()
{
    int num{};
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (isEven(num))
    {
        std::cout << num << " is odd" << std::endl;
    } else{
        std::cout << num << " is even" << std::endl;
    }
}