#include <iostream>
#include "../includes/random.h"

class Monster {
    public:
        enum Type{
            dragon,
            goblin,
            ogre,
            orc,
            skeleton,
            troll,
            vampire,
            zombie,
            maxMonsterTypes,
        };

        Monster(const Type& type, const std::string& name, const std::string& roar, const int hp)
            : m_type(type), m_name(name), m_roar(roar), m_hp(hp)
        {}

        const std::string getTypeString() const
        {
            switch (m_type)
            {
                case dragon: return "dragon";
                case goblin: return "goblin";
                case ogre: return "ogre";
                case orc: return "orc";
                case skeleton: return "skeleton";
                case troll: return "troll";
                case vampire: return "vampire";
                case zombie: return "zombie";
                default: return "???";
            }
        }

        const std::string& getName() {return m_name;}
        const int getHP() {return m_hp;}
        const std::string& getRoar() {return m_roar;}



    private:
        Type m_type{};
        std::string m_name{};
        std::string m_roar{};
        int m_hp{};
};

void print (Monster& monster)
{

    std::cout << monster.getName() << " the " << monster.getTypeString(); 
    
    if (monster.getHP() > 0)
    {
        std::cout << " has " << monster.getHP() << " hit points and says " << monster.getRoar() << "." << std::endl;
    } else 
    {
        std::cout << " is dead." << std::endl;
    }

}
namespace MonsterGenerator
{

    const std::string selName(const int num)
    {
            switch (num)
            {
                case 0: return "Jack";
                case 1: return "Hayden";
                case 2: return "Luci";
                case 3: return "Allie";
                case 4: return "Tyler";
                case 5: return "Abby";
                default: return "???";
            }
    }

    const std::string selRoar(const int num)
    {
            switch (num)
            {
                case 0: return "*Cracks open beer*";
                case 1: return "*Ur mom*";
                case 2: return "*Can I have hug :)*";
                case 3: return "*Who ate all the p*ssy?*";
                case 4: return "*Tryna play blackjack?*";
                case 5: return "*Indubitably*";
                default: return "???";
            }
    }

    Monster generate()
    {
        Monster skeleton{ static_cast<Monster::Type>(Random::get(0, Monster::maxMonsterTypes-1)), selName(Random::get(0, 5)), selRoar(Random::get(0, 5)), Random::get(1, 100) };    
        return skeleton;
    }
};

int main()
{
	Monster m{ MonsterGenerator::generate() };
	print(m);

	return 0;
}
