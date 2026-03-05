#include <iostream>
#include <string_view>
/*
In designing a game, we decide we want to have monsters, because everyone likes fighting monsters. 
Declare a struct that represents your monster. 
The monster should have a type that can be one of the following: an ogre, a dragon, an orc, a giant spider, or a slime.

Each individual monster should also have a name (use a std::string), 
as well as an amount of health that represents how much damage they can take before they die. 
Write a function named printMonster() that prints out all of the struct’s members. 
Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().

Your program should produce the following output:

Ezoic
This Ogre is named Torg and has 145 health.
This Slime is named Blurp and has 23 health.

*/


struct Monster{

    enum Type {
        OGRE,
        DRAGON,
        ORC,
        GIANT_SPIDER,
        SLIME
    };

    Type type;
    std::string name;
    int health;
};

constexpr std::string_view typeToStr(Monster::Type type){
    switch (type){
        case Monster::Type::OGRE: return "Ogre";
        case Monster::Type::DRAGON: return "Dragon";
        case Monster::Type::ORC: return "Orc";
        case Monster::Type::GIANT_SPIDER: return "Giant spider";
        case Monster::Type::SLIME: return "Slime";
    }
    return "-NO VALID MONSTER TYPE-";
}

void print(Monster &monster){
    std::cout << "This " << typeToStr(monster.type) << " is named " <<  monster.name << " and has " << monster.health << " HP\n";
}

int main (){

    Monster ogre {Monster::Type::OGRE, "Torg", 145};
    Monster slime {Monster::Type::SLIME, "Blurp", 23};

    print(ogre);
    print(slime);


    return 0;
}