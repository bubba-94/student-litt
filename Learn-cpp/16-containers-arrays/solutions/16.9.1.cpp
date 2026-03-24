#include <vector>
#include <iostream>

namespace animals{
    enum Type{
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max
    };
};


int main(){
    
    std::vector <int> animals(animals::Type::max);

    animals = {2,4,4,4,2,0};

    std::cout << "Chicken has " << animals[animals::Type::chicken] << " legs\n";


    return 0;
}