#pragma once
#include "Point.h"
class Point2D :
    public Point
{
public:
    Point2D(void);
    Point2D(double, double);
    virtual double distance(Point& a);
    double x();
    double y();
    void x(double t_x);
    void y(double t_y);
    virtual vector<double> getCoordinates();
};