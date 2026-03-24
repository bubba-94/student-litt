#include <vector>
#include <iostream>
#include <string_view>

/*
> Step #1
Define an unscoped enum in a namespace to identify the different types of items. Define an std::vector to store the number of each item type the player is carrying. The player should start with 1 health potion, 5 torches, and 10 arrows. Assert to make sure the array has the correct number of initializers.

Hint: Define a count enumerator and use it inside the assert.

The program should output the following:

    You have 16 total items

> Step #2
Modify your program from the prior step so it now outputs:

    You have 1 health potion
    You have 5 torches
    You have 10 arrows
    You have 16 total items
*/


namespace Player{

enum Items{
  health_pots,
  torches,
  arrows,
  max_items
};

};

std::string_view itemToStr(Player::Items item){
    switch (item){
        case Player::Items::health_pots: return " health pot";
        case Player::Items::torches: return " torch";
        case Player::Items::arrows: return " arrow";
        default: return " ";
    }
}

void print(Player::Items item){
    std::cout << itemToStr(item);
}

void print(const std::vector<int>& vec){

    for (size_t i = 0; i < vec.size(); i++){
        std::cout << "You have " << vec.at(i);
        if (i == Player::Items::health_pots){
            print(Player::Items::health_pots);
            if (vec.at(i) > 1){
                std::cout << "s";
            }
        }

        if (i == Player::Items::torches){
            print(Player::Items::torches);
            if (vec.at(i) > 1){
                std::cout << "es";
            }
        }

        if (i == Player::Items::arrows){
            print(Player::Items::arrows);
            if (vec.at(i) > 1){
                std::cout << "s";
            }
        }
        std::cout << "\n";
    }
}

int main(){

    std::vector<int> items (Player::Items::max_items);

    items.at(Player::Items::health_pots) = 1;
    items.at(Player::Items::torches) = 5;
    items.at(Player::Items::arrows) = 10;

    print(items);

    int total {};

    for (size_t i = 0; i < items.size(); i++){
        total += items.at(i);
    }   
    std::cout << "Player has " << total << " items\n";

    return 0;
}