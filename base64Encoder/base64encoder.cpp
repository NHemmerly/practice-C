#include <iostream>
#include <vector>

const std::string& getHexString(std::string& hex)
{
    std::cout << "Enter a string to be converted to hex: " << std::endl;
    std::cin >> hex;
    return hex;
}

void decToBin(int dec)
{
    std::vector<int> byte {9};

    for (int i = 7; i >= 0 ; --i)
    {
        byte[i] = dec % 2;
        dec /= 2;
    }
    
    for (int i = 0; i < 8; ++i)
    {
        std::cout << byte[i];
    }
    std::cout << std::endl;

}

int main()
{
    std::string hexString{};
    hexString = getHexString(hexString);

    std::cout << hexString << std::endl;

    int hexInt = std::stoi(hexString, 0, 16);
    std::cout << hexInt << std::endl;
    decToBin(hexInt);
}