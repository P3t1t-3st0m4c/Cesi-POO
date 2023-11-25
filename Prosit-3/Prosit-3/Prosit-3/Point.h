#pragma once
#include <math.h>
#include <vector>

using namespace std;

class Point{
public:
	Point(void);
	virtual double distance(Point& a) = 0;
	virtual vector<double> getCoordinates();

protected:
	vector<double> _coordinates;
};