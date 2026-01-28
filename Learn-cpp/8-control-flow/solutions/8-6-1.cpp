#include <iostream>

/*C-Fran-Borjan

Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations: +, -, *, /, or % (remainder). 
Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. 
If an invalid operator is passed into the function, the function should print an error message. 
For the division operator, do an integer division, and don’t worry about divide by zero.

*/

void calculate(int x, int y, char c);

int main (){

    calculate(10, 2, '+');
    calculate(10, 2, '-');
    calculate(10, 2, '*');
    calculate(10, 0, '/');
    calculate(10, 2, '%');
    calculate(10, 2, 'c');
     
    return 0;
}




void calculate(int x, int y, char c){

    switch (c){
        case '+':
            std::cout << x << " + " << y << " = "  << x+y << "\n";
            break;
        case '-':
            std::cout << x << " - " << y << " = "  << x-y << "\n";
            break;
        case '*':
            std::cout << x << " * " << y << " = "  << x*y << "\n";
            break;
        case '/':
            if (y == 0){
                std::cout << "Cannot divide by " << y << "\n";
                std::cout << "Setting " << y << " to 1\n";
                y = 1;
            }
            std::cout << x << " / " << y << " = "  << x/y << "\n";
            break;
        case '%':
            std::cout << x << " % " << y << " = "  << x % y << "\n";
            break;
        default:
            std::cout << "Wrong character entered\n";
            break;
    }

}

