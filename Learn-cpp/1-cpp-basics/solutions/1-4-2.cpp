#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter three numbers <int, int, int>: "; // ask user for a number
    int x{},y{},z{}; // define variable x to hold user input
    std::cin >> x >> y >> z; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << ", "<< y << ", " <<  z << "\n";

    return 0;
}