#include <iostream>
#include <vector>
#include <cassert>
namespace Animals
{
    enum names{
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        MaxAnimals,
    };
}

int main()
{
    std::vector<int> legs = {2, 4, 4, 4, 2, 0};

    assert(Animals::MaxAnimals == std::size(legs));

    std::cout << legs[Animals::elephant] << std::endl;
}