#include <vector>
#include <iostream>

template <typename T>
void printElement(const std::vector<T>& vec, size_t index){

    if (index < 0 ||index >= static_cast<int>(vec.size())){
        std::cout << "Index: " << index << " is out of bounds\n" << "----\n";
    }
    else {

    std::cout   << "Index: "<< index << "\n"
                << "Using .at(): " << vec.at(index) << "\n"
                << "using []: " << vec[index]
                << "\n----\n";
    }
}

int main(){


    std::vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}