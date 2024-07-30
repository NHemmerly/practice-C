#include <iostream>
#include <string>

std::string getName(int runNum)
{
    std::string name{};
    std::cout << "Enter the name of person #" << runNum << ":";
    std::getline(std::cin >> std::ws,name);
    return name;
}

int getAge(std::string_view name)
{
    int age;
    std::cout << "Enter the age of " << name << ":";
    std::cin >> age;
    return age;
}

void printOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
    std::cout << name1 << "(age " << age1 << ") is older than " << name2 << "(age " << age2 << ")." << std::endl;
}

int main()
{
    const std::string name1{getName(1)};
    const int age1{getAge(name1)};
    const std::string name2{getName(2)};
    const int age2{getAge(name2)};

    (age1 > age2) ? printOlder(name1, age1, name2, age2) : printOlder(name2, age2, name1, age1);

}