#include <iostream>

/*

Write a class named Ball. 
Ball should have two private member variables, one to hold a color, and one to hold a radius. 
Also write a function to print out the color and radius of the ball.

*/


class Ball{
public:
    Ball(std::string string, int radius): _color(string), _radius{radius}{} 

    void print(){
        std::cout << "Color: " << _color << "\nRadius: " << _radius << "\n";
    }

private:
    std::string _color;
    int _radius;
};


int main(){
    Ball ball("blue", 2);
    ball.print();
    return 0;
}