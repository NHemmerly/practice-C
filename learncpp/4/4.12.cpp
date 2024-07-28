#include <iostream>
#include <cstdint>

int main()
{
    char x{};
    std::cout << "Enter a single character: ";
    std::cin >> x;
    std::cout << "You entered '" << x << "' which has ASCII code " << x + 0 << "." << std::endl;
}