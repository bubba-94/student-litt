#include <iostream>
#include <vector>


template <typename T>
void find(int value, const std::vector<T> & vec){
    for (size_t i = 0; i < vec.size(); i++){
        if(value == vec.at(i)){
            std::cout << "Value: " << value << " found at index: " << i << "\n";
        }
    }
}

int main(){

    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    int value = 0;
    std::cout << "Enter a value between 1 - 9\n";
    std::cin >> value;
    
    while (value < 1 || value > 9){
        std::cout << "Enter a value between 1 - 9\n";
        std::cin >> value;
    }


    
    find (value, arr);

    return 0;
}