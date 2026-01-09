#include <iostream>


int accumulate (int x);


int main (int argc, char **argv)
{

    std::cout << accumulate(1) << "\n"; 
    std::cout << accumulate(2) << "\n"; 
    std::cout << accumulate(3) << "\n";
    std::cout << accumulate(4) << "\n"; 

    return 0;
}

int accumulate (int x){
    static int sum;

    sum += x;

    return sum;
}