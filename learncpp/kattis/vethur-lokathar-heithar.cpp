#include <iostream>
#include <string>

int main()
{
    int v{};
    int n{};
    
    
    std::cin >> v;
    std::cin >> n;
    std::cin.ignore();
    std::string::size_type sz;   // alias of size_t


    for (int i = 0; i < n; i++)
    {
        std::string road;
        std::getline(std::cin, road);
        int speed = std::stoi((road.substr(road.find(" ") + 1)), &sz);

        if (v > speed)
        {
            std::cout << road.substr(0, road.find(" ")) << " lokud" << std::endl;
        } else 
        {
            std::cout << road.substr(0, road.find(" ")) << " opin" << std::endl;
        }
        

    }
}