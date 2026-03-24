#include <vector>
#include <iostream>
#include <utility>

/*
Write a function that takes a std::vector, returns a std::pair containing the indices of the elements with the min and max values in the array. 
The documentation for std::pair can be found here. Call the function on the following two vectors:

With array ( 3, 8, 2, 5, 7, 8, 3 ):
The min element has index 2 and value 2
The max element has index 1 and value 8

With array ( 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 ):
The min element has index 4 and value 1.2
The max element has index 5 and value 8.8

*/

template <typename T>
std::pair<T, size_t> min(const std::vector<T>& vec){
    T min {vec.at(0)};
    size_t index{};
    for (size_t i = 0; i < vec.size(); i++){
        if (vec.at(i) < min){
            min = vec.at(i);
            index = i;
        }
    }
    return std::make_pair(min, index);
}
template <typename T>
std::pair<T, size_t> max(const std::vector<T>& vec){
    T max{vec.at(0)};
    size_t index{};
    
    std::pair<T, T> pair;
    for (size_t i = 0; i < vec.size(); i++){
        if (vec.at(i) > max){
            max = vec.at(i);
            index = i;
        }
    }
    return std::make_pair(max, index);
}

template <typename T>
void print(const std::vector<T>& vec){

    std::pair <T, size_t> pair1 = min(vec);
    std::pair <T, size_t> pair2 = max(vec);

    std::cout << "Array: {";
    for (const auto& ele: vec){
        std::cout << ele << ", ";
    }
    std::cout << "}\n";

    std::cout << "The min element has value: " << pair1.first << " and index: " << pair1.second << "\n";
    std::cout << "The max element has value: " << pair2.first << " and index: " << pair2.second << "\n";
}

int main(){

    std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
    std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };

    print(v2);
    print(v1);

    return 0;
}