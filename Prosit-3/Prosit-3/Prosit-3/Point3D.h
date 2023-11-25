#pragma once
#include "Point.h"
class Point3D :
    public Point
{
    Point3D(void);
    Point3D(double x, double y, double z);
    virtual double distance(Point& a);
    double x();
    double y();
    double z();
    void x(double t_x);
    void y(double t_y);
    void z(double t_z);
    virtual vector<double> getCoordinates();

};

