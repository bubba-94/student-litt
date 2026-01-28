#include <iostream>
/*
    Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all the numbers from 1 to value.
    For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.
*/


int sumTo(int value){
    int sum{};
    for (int i = 1; i <= value; ++i){
        sum += i; 
    }

    return sum;
} 

int main (){


    int total = sumTo(100);

    std::cout << total << "\n"; 

    return 0;
}