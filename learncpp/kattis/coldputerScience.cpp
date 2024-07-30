#include <iostream>
#include <sstream>
#include <string>

int main()
{
    int n {};
    int lessThanZero{0};

    std::cin >> n;

    std::string temps{};

    std::getline(std::cin >> std::ws, temps);
    std::stringstream tempStr{temps};

    for (int i = 0; tempStr >> i; )
    {
        if (i < 0) 
        {
            ++lessThanZero;
        }
    }

    std::cout << lessThanZero << std::endl;
}