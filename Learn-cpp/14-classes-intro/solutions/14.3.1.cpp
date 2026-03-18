#include <iostream>

/*
    Create a struct called IntPair that holds two integers. 
    Add a member function named print that prints the value of the two integers.
*/

struct IntPair{
    int x;
    int y;

    void print(){
        std::cout << "Value x: "<< x << "\n" << "Value y: " << y << "\n";
    }
};


int main (){

    IntPair pair {2, 10};
    IntPair pair2 {23, 10};

    pair.print();
    pair2.print();
    return 0;
}