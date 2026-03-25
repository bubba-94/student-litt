#include <array>
#include <iostream>

int main(){

    std::array <char, 5> hello {'h', 'e', 'l', 'l', 'o'};
    std::cout <<"Length of array: " <<  hello.size() << "\n";
    std::cout << hello[1] << hello.at(1) << std::get<1>(hello) << "\n";

    return 0;
}