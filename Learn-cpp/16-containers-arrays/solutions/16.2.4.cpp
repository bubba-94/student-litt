#include <vector>
#include <iostream>

int sum(const std::vector<int> &vec){
    int sum = 0;
    for (size_t i = 0; i < vec.size(); ++i){
        sum += vec[i];
    }
    return sum;
}

int product(const std::vector<int> &vec){
    int product = 1;
    for (size_t i = 0; i < vec.size(); ++i){
        product *= vec[i];
    }
    return product;
}

void set(std::vector<int> &vec){
    std::cout << "Enter 3 integers";
    std::cin >> vec[0] >> vec[1] >> vec[2];
}

int main(){

    std::vector <int> ints(3);

    set(ints);

    std::cout << "The sum is: " <<  sum(ints) << "\n";
    std::cout << "The product is: " <<  product(ints) << "\n";

    return 0;
}