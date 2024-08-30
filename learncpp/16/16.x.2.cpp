#include <iostream>
#include <vector>
#include <cassert>

namespace Items
{
    enum Types {
        healthPotion,
        torch,
        arrow,
        max_items,
    };

    std::vector<int> bag {1, 5, 10};
}

const std::string convertEnum(const int type)
{
    switch(type)
    {
        case Items::healthPotion: return "health potion";
        case Items::torch: return "torch";
        case Items::arrow: return "arrow";
        default: return "???";
    }
}

void printTotalItems(const std::vector<int>& bag)
{
    int sum {0};
    for (const auto& itemCount : bag)
    {
        sum += itemCount;
    }
    std::cout << "You have " << sum << " total items" << std::endl;
}

void printItems(const std::vector<int>& bag)
{
    for (int i = 0; i < bag.size(); ++i)
    {
        std::cout << "You have " << bag[i] << " " << convertEnum(i);
        if (bag[i] > 1)
        {
            (convertEnum(i).back() == 'h') ? std::cout << "es" : std::cout << "s";
        }
        std::cout << std::endl;
    }
}

int main()
{
    assert(Items::bag.size() == Items::max_items);
    printItems(Items::bag);
    printTotalItems(Items::bag);
}