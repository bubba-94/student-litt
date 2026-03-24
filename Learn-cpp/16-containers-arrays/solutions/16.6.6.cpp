#include <iostream>
#include <vector>
#include <string_view>

void print(const std::string& str){
    std::cout << str;
}

int main(){

    std::vector<int> divisors{3, 5, 7, 11, 13, 17, 19};
    std::vector<std::string_view> word{"fizz", "buzz", "pop", "bang", "jazz", "pow", "boom"};

    if (word.size() != divisors.size()){
        return -1;
    }

    bool printed = false;
    int loops = 150;

    for (size_t i = 1; i < loops; ++i){
        for (size_t j= 0; j < divisors.size(); j++){
            if (i % divisors.at(j) == 0){
                std::cout << word.at(j);
                printed = true;
            }
        }
        if (!printed){
            std::cout << i;
        }
        printed = false;
        std::cout << "\n";
    }

    return 0;
}