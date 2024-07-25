#include <iostream>

int main()
{
    char x[256];
        double y{};
    std::cout << "Enter a number to square: ";

    std::cin >> x;
    y = std::atof(x);
    std::cout << y * y << std::endl;



}