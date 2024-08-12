#include <iostream>

namespace MonsterType {
    enum MonsterType {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}

int main(){
    MonsterType::MonsterType monster {MonsterType::troll};
    if (monster == MonsterType::goblin)
    {
        std::cout << "I'm a gob!" << std::endl;
    } else {
        std::cout << "I'm not a gob!" << std::endl;
    }
}