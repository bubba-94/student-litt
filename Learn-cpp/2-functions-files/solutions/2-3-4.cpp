#include <iostream>


int doubleNumber(int x){
    return x * 2;
}

int main (){
    
    int x {1233};
    std::cout << "doubleNumber(" << x << ")" << " = " << doubleNumber(x) << "\n";

    return 0;
}