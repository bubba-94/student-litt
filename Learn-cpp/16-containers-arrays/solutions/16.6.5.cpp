#include <iostream>
#include <vector>

template <typename T>
T findMax(const std::vector <T> &vec){
    T value;
    if (vec.size() < 1){    
        value = 0;
    }
    else value = vec.front();

    for (size_t i = 0; i < vec.size(); ++i){
        if (vec.at(i) > value){
            value = vec.at(i);
        }
    }
    return value;
}

int main(){
    std::vector data1 { 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2 { -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3 { };
    std::cout << findMax(data3) << '\n';

    return 0;
}