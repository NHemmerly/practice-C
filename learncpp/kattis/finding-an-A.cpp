#include <iostream>
#include <string>

int main()
{
    std::string in;
    std::cin >> in;
    std::size_t found = in.find('a');

    std::cout << in.substr(found, (in.length() - found)) << std::endl;
}