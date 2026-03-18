#include <iostream>


class Point3d{

public:
    void setValues(int x, int y, int z){
        mX = x;
        mY = y;
        mZ = z;
    } 

    bool isEqual(const Point3d obj){
        if (mX == obj.mX && mY == obj.mY && mZ == obj.mZ){
            return true;
        }
        return false;
    }

    void print(){
        std::cout << "<" << mX << ", " << mY << ", " << mZ << ">"<< "\n";
    }
private:
    int mX;
    int mY;
    int mZ;
};

int main()
{
    Point3d point;
    point.setValues(1, 2, 3);
    point.print();

    Point3d point2;
    point2.setValues(1,2,4);
    point2.print();

    std::cout << "point and point2 are "<< (point.isEqual(point2)? "true": "false") << "\n";

    point2.setValues(1,2,3);
    point2.print();

    std::cout << "point and point2 are "<< (point.isEqual(point2)? "true": "false") << "\n";
    std::cout << '\n';

    return 0;
}