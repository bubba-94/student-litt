#include <iostream>


/*

Write a program that asks the user to enter two integers, one named smaller, the other named larger. 
If the user enters a smaller value for the second integer, use a block and a temporary variable to swap the smaller and larger values.
Then print the values of the smaller and larger variables. 
Add comments to your code indicating where each variable dies. 
Note: When you print the values, smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.

*/

int getInt(){
    int x;
    std::cout << "Print a int: ";
    std::cin >> x; 

    return x;
}

void print(int x, const char* name){
    std::cout << "Value of variable " << name << ": " << x << "\n";
}

int main (){

    int smaller{getInt()};
    int larger{getInt()};

    print(smaller,"smaller");
    print(larger,"larger");

    if (smaller > larger){
        int temp {smaller};
        smaller = larger;
        larger = temp;
    }

    std::cout << "After swap: \n";

    print(smaller,"smaller");
    print(larger,"larger");
}