#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
#include "Point3d.h"

class Vector3d
{
private:
	double m_x{};
	double m_y{};
	double m_z{};

public:
	Vector3d(double x, double y, double z);
	void print() const;
	friend void Point3d::moveByVector(const Vector3d& v); // Point3d::moveByVector() is now a friend of class Vector3d
};
#endif 