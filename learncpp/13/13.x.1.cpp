#include <iostream>

enum class MonsterTypes {
    ogre,
    dragon,
    orc,
    giantSpider,
    slime,
};

struct Monster {
    std::string name {};
    int health {};
    MonsterTypes type {};
};

std::string typeString(const MonsterTypes& type)
{
    switch (type)
    {
    case MonsterTypes::ogre:
        return "Ogre";
    case MonsterTypes::dragon:
        return "Dragon";
    case MonsterTypes::orc:
        return "Orc";
    case MonsterTypes::giantSpider:
        return "Giant Spider";
    case MonsterTypes::slime:
        return "Slime";    
    default:
        std::cout << "Monster type not found!" << std::endl;
        return "Unknown";
    }
}

void printMonster(const Monster& monster)
{
    std::cout << "This " << typeString(monster.type) << " is named " 
                << monster.name << " and has " << monster.health << " health." << std::endl;
}

int main()
{
    Monster ogreTest {"Torg", 145, MonsterTypes::ogre};
    Monster slimeTest {"Blurp", 23, MonsterTypes::slime};

    printMonster(ogreTest);
    printMonster(slimeTest);

}