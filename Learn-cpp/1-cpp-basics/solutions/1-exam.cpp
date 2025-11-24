#include <iostream>

/*
    Write a program that asks the user to enter a number, and then enter a second number. 
    The program should tell the user what the result of adding and subtracting the two numbers is
*/

int main (){
    int x{};
    int y{};
    std::cout << "Enter two number <int, int>: ";
    std::cin >> x >> y;

    std::cout << x << " + " << y << " = " << x+y << "\n"; 
    std::cout << x << " - " << y << " = " << x-y << "\n";
    std::cout << x << " * " << y << " = " << x*y << "\n";
}