#include <iostream>
#include "2-exam-2io.cpp"

int readNumber(){
    int x{};
    std::cout << "Enter an int: "; 
    std::cin >> x;
    return x;
}

void writeAnwser(int x){
    std::cout << "The anwser is: " << x << "\n";
}


int main (){
    int x = readNumber();
    int y = readNumber();

    writeAnwser(x+y);
}

// compile with g++ 2-exam-2.cpp 2-exam-2io.cpp -o main