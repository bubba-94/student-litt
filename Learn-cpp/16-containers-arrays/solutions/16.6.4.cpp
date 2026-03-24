#include <iostream>
#include <vector>


template <typename T>
void find(T value, const std::vector<T> & vec){
    for (size_t i = 0; i < vec.size(); i++){
        if(value == vec.at(i)){
            std::cout << "Value: " << value << " found at index: " << i << "\n";
            return;
        }
    }
    
}

int main(){

    std::vector arr{ 4.4, 6.6, 7.7, 3.3, 8.8, 2.2, 1.1, 9.9 };

    double value = 0.0;
    std::cout << "Enter a value between 1.1 - 9.9\n";
    std::cin >> value;
    
    while (value < 1.1 || value > 9.9){
        std::cout << "Enter a value between 1.1 - 9.9\n";
        std::cin >> value;
    }

    
    find (value, arr);

    return 0;
}