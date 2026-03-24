#include <vector>
#include <iostream>

int main(){

    std::vector<char> word{'h','e', 'l','l','o'};

    size_t size = word.size();

    std::cout << "Vector size: " << size << "\n";

    std::cout << word.at(1) << word[1] << "\n";

    return 0;
}