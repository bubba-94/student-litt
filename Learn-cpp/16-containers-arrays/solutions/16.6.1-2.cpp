
/*
Write a short program that prints the elements of the following vector to the screen using a loop:
*/

#include <iostream>
#include <vector>

template <typename T>
void print(const std::vector<T>& vec){
    for (size_t i = 0; i < vec.size(); i++){
        std::cout << vec.at(i) << " ";
    }
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    print(arr);

    return 0;
}
