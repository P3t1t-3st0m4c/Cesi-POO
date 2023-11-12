#include <iostream>

#pragma once
class Point
{
public:
	Point();
	Point(double x, double y);
	double distance(const Point& a);
	bool entre(const Point& a, const Point& b);
	double getX() const;
	double getY() const;
	void modifyCoords(const double x, const double y);

	friend std::ostream& operator<<(std::ostream& flux, const Point& a);

private:
	double x;
	double y;
};