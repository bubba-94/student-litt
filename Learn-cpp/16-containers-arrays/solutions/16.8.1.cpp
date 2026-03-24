#include <vector>
#include <iostream>

int main(){

    std::vector <std::string> names{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::string input;
    std::cin >> input;
    
    bool found = false;

    for (const auto& name: names){
        if(input == name){
            found = true;
        }
    }
    if(found) std::cout << input << " found\n";

    return 0;
}