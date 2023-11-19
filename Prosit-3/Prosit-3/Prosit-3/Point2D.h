#pragma once
#include "Point.h"
class Point2D :
    public Point
{
public:
    Point2D(void);
    Point2D(double, double);
    ~Point2D();
    virtual double distance(Point& a) const;
};