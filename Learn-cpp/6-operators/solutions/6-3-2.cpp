#include <iostream>

/*
    Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. 
    Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise. 
    Use the remainder operator to test whether the integer parameter is even. 
    Make sure isEven() works with both positive and negative numbers.
*/

constexpr bool isEven(int x){
    if (x == 0){
        std::cout << "isEven(0) makes not sense\n";

        return false;
    }
    if ((x % 2) == 0){
        return true;
    }
    return false;
}


int main (){
    std::cout << "Enter an int: "; 
    int x; 
    std::cin >> x;

    std::cout << "isEven("<< x << "): " << (isEven(x) ? "true" : "false") << "\n";

}