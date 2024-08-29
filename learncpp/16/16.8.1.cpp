#include <iostream>
#include <string_view>
#include <vector>

template <typename T>
bool findName(const T& name, const std::vector<T>& namelist)
{
    for (const auto& nam : namelist)
    {
        if (nam == name)
        {
            std::cout << name << " was found. " << std::endl;
            return true;
        }
    }
    std::cout << name << " was not found." << std::endl;
    return false;
}

int main(){
    std::vector<std::string_view> names {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::string name{};
    std::cout << "Enter a name: ";
    std::cin >> name;
    findName<std::string_view>(name, names);

}