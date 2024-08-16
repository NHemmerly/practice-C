#include <iostream>
#include <string_view>

struct Cat
{
    std::string_view name{ "cat" };
    int numLegs{ 4 };
};

struct Dog
{
    std::string_view name{ "dog" };
    int numLegs{ 4 };
};

struct Chicken
{
    std::string_view name{ "chicken" };
    int numLegs{ 2 };
};

struct Snake
{
    std::string_view name { "snake" };
    int numLegs{0};
};

int main()
{
    constexpr Cat animal;
    constexpr Snake snakey;
    std::cout << "a " << animal.name << " has " << animal.numLegs << " legs\n";
    std::cout << "a " << snakey.name << " has " << snakey.numLegs << " legs\n";


    return 0;
}