#include <vector>
#include <iostream>

template <typename T>
bool isValueInArray(const std::vector<T>& vec, T value){
    for (const auto& index: vec){
        if (index == value){
            return true;
        }
    }
    return false;
}

int main(){

    std::vector <std::string> names{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
    std::vector <int> numbers {1,2,3,4,5,6,7,8};

    std::string name = "Alex";
    int number = 5;

    std::cout << "Is value: [" << name << "] in array: " << (isValueInArray(names, name) ? "true" : "false");
    std::cout << "\n";
    std::cout << "Is value: [" << number << "] in array: " << (isValueInArray(numbers, number) ? "true" : "false");
    std::cout << "\n";
    number = 10;
    std::cout << "Is value: [" << number << "] in array: " << (isValueInArray(numbers, number) ? "true" : "false");
    std::cout << "\n";
    return 0;
}