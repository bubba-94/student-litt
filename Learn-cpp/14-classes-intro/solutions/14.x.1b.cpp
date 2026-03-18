#include <iostream>
#include <cmath>

class Point2d{
public:
    Point2d(double x = 0.0, double y = 0.0): m_x{x}, m_y{y}{}

    double distanceTo(const Point2d& ref){
        return std::sqrt((m_x - ref.m_x)*(m_x - ref.m_x) + (m_y - ref.m_y)*(m_y - ref.m_y));
    }

    void print(){
        std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
    }
private: 
    double m_x {0.0};
    double m_y {0.0};
};

int main (){

    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << "\n";

    return 0;
}