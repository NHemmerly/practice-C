#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string email{};

    std::getline(std::cin >> std::ws, email);
    email.erase(std::remove_if(email.begin(), email.end(), ::isspace),
        email.end());

    std::cout << email << std::endl;
}