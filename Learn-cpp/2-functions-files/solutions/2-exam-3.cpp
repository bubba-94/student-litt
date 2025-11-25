#include "2-exam-3.h"

int readNumber(){
    int x{};
    std::cout << "Enter an int: "; 
    std::cin >> x;
    return x;
}
void writeAnwser(int x){
    std::cout << "Anwser is " << x << "\n";
}

int main (){
    int x {readNumber()};
    int y {readNumber()};

    writeAnwser(x+y);
}