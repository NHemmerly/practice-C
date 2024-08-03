#include <iostream>

bool isPrime(int num)
{
    if (num == 2)
    {
        return true;
    }
    if (num == 3)
    {
        return true;
    }
    if (num == 5)
    {
        return true;
    }
    if (num == 7)
    {
        return true;
    }
    return false;
}

int main()
{
    int x {};
    std::cout << "Enter a number 0 throuh 9: ";
    std::cin >> x;
    if (isPrime(x))
    {
        std::cout << "The digit is prime" << std::endl;
    } else
    {
        std::cout << "The digit is not prime" << std::endl;
    }
}