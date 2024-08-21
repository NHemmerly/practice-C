#include <iostream>

const std::string& getHexString(std::string& hex)
{
    std::cout << "Enter a string to be converted to hex: " << std::endl;
    std::cin >> hex;
    return hex;
}

const int decToBin(int dec)
{
    
}

int main()
{
    std::string hexString{};
    hexString = getHexString(hexString);

    std::cout << hexString << std::endl;

    int hexInt = std::stoi(hexString, 0, 16);
    std::cout << hexInt << std::endl;
}