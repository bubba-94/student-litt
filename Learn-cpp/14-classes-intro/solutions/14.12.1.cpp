#include <iostream>

class Ball{

    public:
    
        Ball(float radius): _radius{radius}{
            print();
        }
        Ball(const std::string_view color = "black", float radius = 10.0): _color{color}, _radius{radius}{
            print();
        }

    private:
        void print(){
           std::cout << "Ball(" << _color << ", " << _radius << ")\n";
        }
        float _radius = 10.0;
        std::string _color = "black";
};

int main(){
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };
    return 0;
}