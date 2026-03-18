#include <iostream>

/*
    Add a new member function to IntPair named isEqual that returns a Boolean indicating whether one IntPair is equal to another.
*/

struct IntPair{
    int x;
    int y;

    bool isEqual(IntPair& ref){
        if (x == ref.x && y == ref.y)
        {
            std::cout << "Equal\n";
            return true;
        } 
        else {
            std::cout << "Not equal\n";
            return false;
        }
    }
    void print(){
        std::cout << "Value x: "<< x << "\n" << "Value y: " << y << "\n";
    }
};


int main (){

    IntPair pair {2, 10};
    IntPair pair2 {23, 10};



    pair.print();
    pair.isEqual(pair2);

    pair.x = 23;

    pair2.print();
    pair2.isEqual(pair);
    return 0;
}