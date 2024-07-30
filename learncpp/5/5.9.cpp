#include <iostream>
#include <string>

std::string getName()
{
    std::string name{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge()
{
    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;
    return age;
}

int main()
{
    std::string name{getName()};
    int age{getAge()};
    std::cout << "Your age + the length of name  is: " << age + static_cast<int>(name.length()) << std::endl;

}