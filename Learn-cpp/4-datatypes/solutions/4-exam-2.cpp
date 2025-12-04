#include <iostream>


double readNumber(){
    std::cout << "Enter a double value: ";
    double value; 
    std::cin >> value; 
    return value;
}


int main(){

    double x{readNumber()};
    double y{readNumber()};

    if (y == 0){
        std::cout << "You cannot divide by 0, setting value to 1.0";
        y == 1.0;
    }
    char op; 
    std::cout << "Enter an operator: ";
    std::cin >> op;

    if(op == '+') std::cout << "Value: " << x + y << "\n";
    else if(op == '-') std::cout << "Value: " << x - y << "\n";
    else if(op == '*') std::cout << "Value: " << x * y << "\n";
    else if(op == '/') std::cout << "Value: " << x / y << "\n";

    return 0;
}