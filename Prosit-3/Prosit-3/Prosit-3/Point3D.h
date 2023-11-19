#pragma once
#include "Point.h"
class Point3D :
    public Point
{
    Point3D(void);
    Point3D(double x, double y, double z);
    ~Point3D();
    virtual double distance(Point3D& a) const;
};

